combMain: combmain.o
	g++ -o combMain.o
combMain.o: combMain.cpp hash1.cpp randomWordGen.cpp writing.cpp server1.cpp
	g++ -c server1.cpp
clean:
	rm -rf *.o combMain
