#include <iostream>
#include <fstream>
#include <sstream>
int main(){

    // Cria uma matriz vazia com 48 de largura x altura
    int size = 6;
    int** mat = new int*[size];
    for(int i = 0; i<size; i++){
        mat[i] = new int[size];
    }
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            mat[i][j] = 0;
        }
    }

    std::ifstream file("easy_test.txt");
    std::string   line;
    std::getline(file, line);

    while(std::getline(file, line))
    {
        std::stringstream   linestream(line);
        std::string         data;
        int                 val1;
        int                 val2;
        int                 val3;
        std::getline(linestream, data, ' ');
        linestream >> val1 >> val2 >> val3;
        mat[val1][val2] = 1;
        mat[val2][val1] = 1;
    }
    
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    
}