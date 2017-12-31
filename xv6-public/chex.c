#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc,char *argv[])
{
 int exectime,pid;

 if(argc<3){
  printf(2,"Usage: nice pid priority\n");
  exit();
 }
 pid = atoi( argv[1]);
 exectime = atoi( argv[2]) ;
 if(exectime <0 || exectime>20){
  printf(2,"Invalid exectime (0-20)!\n");
  exit();
 }
 printf(1," pid=%d, ex=%d\n",pid,exectime);
 chex (pid,exectime);

 exit();
}

