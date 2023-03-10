#ifndef __SCHEDULER__
#define __SCHEDULER__

#include "Timer.h"
#include "Task.h"

#define MAX_TASKS 10

class Scheduler {
  int basePeriod;
  int nTasks;
  Task* taskList[MAX_TASKS];
  Timer timer;

  public:
    void init(int basePeriod);
    /**
    * Adds a task to the execution flow
    */
    virtual bool addTask(Task* task);
    /**
    * executes a tick from every task
    */
    virtual void schedule();
};

#endif