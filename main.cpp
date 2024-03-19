#include <string>
#include <fstream>

void countAndWriteDigitsPerLine(std::string filename, std::string outputFilename){
    std::ifstream fin(filename);
    std::ofstream fout(outputFilename);

    std::string line;
    std::size_t size;

    while(std::getline(fin,line)){
        size = std::count_if(line.begin(),line.end(),std::isdigit);
        fout << size << "\n";
    }

}

unsigned int countMaxDigits(string filename){
    std::ifstream fin(filename);
    unsigned int max = 0;
    unsigned int size;
    while(std::getline(fin,line)){
        size = std::count_if(line.begin(),line.end(),std::isdigit);
        max = std::max(size,max);
        fout << size << "\n";
    }
    return max;
}
