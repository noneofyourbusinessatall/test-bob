#include<iostream>
#include<cstdio>
#include <cstdlib>
#include <vector>
#include <time.h>
#include <algorithm>
#include <iterator>
#include <chrono>

#include "process.h"

using namespace std;



int Process::get_process_id() {
    return process_id;
}

int Process::get_start_time() {
  return start_time;
}

int Process::get_total_cpu_duration() {
  return total_cpu_duration;
}

int Process::get_remaining_cpu_duration() {
  return remaining_cpu_duration;
}

int Process::get_average_cpu_burst_length() {
  return average_cpu_burst_length;
}

int Process::get_next_cpu_burst_length() {
  return next_cpu_burst_length;
}

int Process::get_io_burst_time() {
  return io_burst_time;
}

int Process::get_priority() {
  return priority;
}

int Process::get_state() {
  return status;
}

///////////////////////////////////////////////////////////////////////// //  //
///////////////////////////////////////////////////////////////////////// //  //

void Process::set_process_id(int a) {
    process_id = a;
}

void Process::set_start_time(int a) {
  start_time = a;
}

void Process::set_total_cpu_duration(int a) {
  total_cpu_duration = a;
}

void Process::set_remaining_cpu_duration(int a) {
  remaining_cpu_duration = a;
}

void Process::set_average_cpu_burst_length() {
  srand(time(NULL));
  average_cpu_burst_length = rand() % 95 + 5;
}

void Process::set_next_cpu_burst_length(int a) {
  next_cpu_burst_length = a;
}

void Process::set_io_burst_time(int a) {
  io_burst_time = a;
}

void Process::set_priority(int a) {
  priority = a;
}

void Process::set_state(int a) {
  status = static_cast<state>(a);
}
