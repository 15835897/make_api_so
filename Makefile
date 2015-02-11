#SOURCE = $(wildcard generated/*.cpp)  
#OBJS = $(patsubst %.cpp,%.o,$(SOURCE))  
#$(info $(OBJS))


CC=g++ -g
CXXFLAGS = -fPIC -I ../api/linux64/ -I /usr/local/include/python3.3m/ 
#CXXFLAGS = -fPIC -I ../api/linux64/  -I generated/ -L./../api/linux64/
all: _ctp_Md.so _ctp_Trader.so

_ctp_Md.so: _ctp_Md.o wrapper_Md.o struct.o
	$(CC) $(CXXFLAGS) -shared $^  -o $@ -Wl,-Bdynamic -lthostmduserapi 
	#$(CC) $(CXXFLAGS) -shared $^  -o $@ 

%.o: %.cpp
	$(CC) -c $(CXXFLAGS)  $< -o $@	


_ctp_Trader.so: _ctp_Trader.o wrapper_Trader.o struct.o
	$(CC) $(CXXFLAGS) -shared $^  -o $@ -Wl,-Bdynamic -lthosttraderapi
	#$(CC) $(CXXFLAGS) -shared $^  -o $@ 

_ctp_Md.o:_ctp_Md.cpp
	$(CC) -c $(CXXFLAGS)  $< 

wrapper_Trader.o:wrapper_Trader.cpp
	$(CC) -c $(CXXFLAGS)  $< 

struct.o:struct.cpp
	$(CC) -c $(CXXFLAGS)  $< 

wrapper_Md.o:wrapper_Md.cpp
	$(CC) -c $(CXXFLAGS)  $< 

_ctp_Trader.o:_ctp_Trader.cpp
	$(CC) -c $(CXXFLAGS)  $< 


#_ctp_Md.cpp wrapper_Md.cpp struct.cpp _ctp_Trader.cpp wrapper_Trader.cpp: generate_wrapper.py
#	python generate_wrapper.py
#	python generate_struct.py

clean:
	rm -rf *.o *.so
