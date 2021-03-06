#include "license_pbs.h" /* See here for the software license */
#include <stdlib.h>
#include <stdio.h> /* fprintf */ 

int pbs_errno = 0;
char *pbs_server = NULL;

extern "C"
{
int pbs_disconnect(int connect)
  { 
  fprintf(stderr, "The call to pbs_disconnect needs to be mocked!!\n");
  exit(1);
  }

char *pbs_strerror(int err)
  {
  fprintf(stderr, "The call to pbs_strerror needs to be mocked!!\n");
  exit(1);
  }
}

int parse_destination_id(char *destination_in, char **queue_name_out, char **server_name_out)
  { 
  fprintf(stderr, "The call to parse_destination_id needs to be mocked!!\n");
  exit(1);
  }

int locate_job(char *job_id, char *parent_server, char *located_server)
  { 
  fprintf(stderr, "The call to locate_job needs to be mocked!!\n");
  exit(1);
  }

int cnt2server(const char *SpecServer)
  { 
  fprintf(stderr, "The call to cnt2server needs to be mocked!!\n");
  exit(1);
  }

int get_server(const char *job_id_in, char *job_id_out, int jsize, char *server_out, int ssize)
  {
  fprintf(stderr, "The call to get_server needs to be mocked!!\n");
  exit(1);
  }

void prt_job_err(const char *cmd, int connect, const char *id)
  { 
  fprintf(stderr, "The call to prt_job_err needs to be mocked!!\n");
  exit(1);
  }

int pbs_movejob(int c, char *jobid, char *destin, char *extend)
  {
  fprintf(stderr, "The call to pbs_movejob needs to be mocked!!\n");
  exit(1);
  }

int pbs_movejob_err(int c, char *jobid, char *destin, char *extend, int *local_errno)
  {
  fprintf(stderr, "The call to pbs_movejob_err needs to be mocked!!\n");
  exit(1);
  }

void initialize_network_info() {}
