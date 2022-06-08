.PHONY: main

ns:
	@g++ sys/comand.cpp ns.cpp -o main && ./main

# @g++ _singin.cpp _comand.cpp _ns.cpp -o main && ./main/