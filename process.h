#ifndef PROCESS_H
#define PROCESS_H

class Process {
  private:
    int process_id;
    int start_time; //Double?
    int total_cpu_duration;
    int remaining_cpu_duration;
    int average_cpu_burst_length;
    int next_cpu_burst_length;
    int io_burst_time;
    int priority;
    enum state {READY, RUNNING, WAITING, TERMINATED};
    state status;
  public:
    int get_process_id();
    int get_start_time();
    int get_total_cpu_duration();
    int get_remaining_cpu_duration();
    int get_average_cpu_burst_length();
    int get_next_cpu_burst_length();
    int get_io_burst_time();
    int get_priority();
    int get_state();
    
    void set_process_id(int a);
    void set_start_time(int a);
    void set_total_cpu_duration(int a);
    void set_remaining_cpu_duration(int a);
    void set_average_cpu_burst_length();
    void set_next_cpu_burst_length(int a);
    void set_io_burst_time(int a);
    void set_priority(int a);
    void set_state(int a);
};

#endif
