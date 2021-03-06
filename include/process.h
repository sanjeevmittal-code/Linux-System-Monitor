#ifndef PROCESS_H
#define PROCESS_H

#include <string>
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  
  Process(int pid): pid_(pid){}
  
  int Pid();                               
  std::string User();                      
  std::string Command();                   
  float CpuUtilization();                  
  std::string Ram();                       
  long int UpTime();                       
  bool operator<(Process const& a) const; 
  bool operator>(Process const& a) const; 
   

 private:
    int pid_;
    float cpu_utilization_;
    std::string command_;
    std::string ram_;
    long uptime_;
    std::string user_;
};

#endif