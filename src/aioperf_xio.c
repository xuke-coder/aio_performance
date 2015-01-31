#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "aioperf_manager.h"
#include "aioperf_xio.h"
#include "aioperf_queue.h"


int
aioperf_xio_mgr_init(aioperf_manager_t *mgr)
{
    return AIOPERF_ERROR;
}

void 
aioperf_xio_mgr_release(aioperf_manager_t *mgr)
{

}


int
aioperf_xio_notifier_init(aioperf_manager_t *mgr)
{
    return AIOPERF_ERROR;
}

void
aioperf_xio_notifier_release(aioperf_manager_t *mgr)
{

}

int
aioperf_xio_read(aioperf_io_task_t *io_task)
{
    return AIOPERF_ERROR;
}

int
aioperf_xio_write(aioperf_io_task_t *io_task)
{
    return AIOPERF_ERROR;
}


int
aioperf_xio_notify_handler(aioperf_repository_t *repository)
{
    return AIOPERF_OK;   
}


int
aioperf_xio_io_read(void *task)
{
    return AIOPERF_OK;
}

int
aioperf_xio_io_write(void *task)
{
    return AIOPERF_OK;
}


void
aioperf_xio_io_callback(void *task)
{
}

