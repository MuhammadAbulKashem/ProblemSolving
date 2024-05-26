////
////  main.cpp
////  competitive-problem-solving
////
////  Created by Md. Abul Kashem on 22/5/24.
////
////
//
//#include <iostream>
//#include <cstdio>
////#include <vector>
//#include <unistd.h>
////#include <queue>
//
//
////#define N 1000
////#define ll long long
//#define input "input.txt"
//#define output "output.txt"
//
//using namespace std;
//
//
//string getRootDirecoty() {
//    string rootDirectory;
//    char ch[200];
//    getcwd(ch,sizeof(ch));
//    
//    for(int i=0;ch[i]!='\0';i++){
//        rootDirectory += ch[i];
//    }
//    return rootDirectory;
//}
//
//FILE* getInputFileFromRoot(string root) {
//    string inputFilePath;
//    if (root.size()>0) {
//        inputFilePath = root + "/" + input;
//    } else {
//        inputFilePath = input;
//    }
//    
//    
//    char inputPath[inputFilePath.size()+1];
//    
//    for(int i=0;i<inputFilePath.size();i++){
//        inputPath[i]=inputFilePath[i];
//    }
//    inputPath[inputFilePath.size()]='\0';
//    
//    FILE *fp = fopen(inputPath,"r");
//    return fp;
//    
//}
//
//FILE* getOutputFileForRoot(string root) {
//    string outputFilePath;
//    if (root.size()>0) {
//        outputFilePath = root + "/" + output;
//    } else {
//        outputFilePath = output;
//    }
//    char outputPath[outputFilePath.size()+1];
//    
//    for(int i=0;i<outputFilePath.size();i++){
//        outputPath[i]=outputFilePath[i];
//    }
//    outputPath[outputFilePath.size()]='\0';
//    
//    FILE *wr = fopen(outputPath,"w");
//    
//    return wr;
//}
//
//void closeFileReadWrite(FILE *read, FILE *write) {
//    fclose(read);
//    fclose(write);
//}
//
//
//int main() {
//    string rootPath;
//    //rootPath = getRootDirecoty();
//    FILE *read = getInputFileFromRoot(rootPath);
//    FILE *write = getOutputFileForRoot(rootPath);
//    
//    if(read==nullptr || write == nullptr){
//        return 0;
//    }
//    
//    int n;
//    while(fscanf(read, "%d",&n)==1){
//        cout<<n<<endl;
//        fprintf(write, "%d\n",n);
//    }
//    
//    closeFileReadWrite(read,write);
//    
//    return 0;
//}
