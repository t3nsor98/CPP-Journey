#include <iostream>
#include <fstream>
using namespace std;




int main(){
    //create and open a text file
    ofstream myTextFile("myTextFile.txt");

    //write to the file
    myTextFile << "Hello World!";

    //close the file
    myTextFile.close();    


    return 0;
};