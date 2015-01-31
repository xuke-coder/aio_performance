/*
*author: xuke
*mail:   x00647007@gmail.com
*data:   2014/12/31
*/


#ifndef _AIOPERF_FAIO_H
#define _AIOPERF_FAIO_H


int
aioperf_xio_mgr_init(aioperf_manager_t *mgr);
void 
aioperf_xio_mgr_release(aioperf_manager_t *mgr);
int
aioperf_xio_notifier_init(aioperf_manager_t *mgr);
void
aioperf_xio_notifier_release(aioperf_manager_t *mgr);
int
aioperf_xio_read(aioperf_io_task_t *io_task);
int
aioperf_xio_write(aioperf_io_task_t *io_task);
int
aioperf_xio_notify_handler(aioperf_repository_t *repository);
int
aioperf_xio_io_read(void *task);
int
aioperf_xio_io_write(void *task);
void
aioperf_xio_io_callback(void *task);


#endif
