// Copyright (c) Athena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef	_CORE_H_
#define	_CORE_H_

// Comment to disable Guild/Party Bound item system 
// By default, we recover/remove Guild/Party Bound items automatically 
#define BOUND_ITEMS

enum SERVER_STATE
{
	SERVER_STATE_STOP,
	SERVER_STATE_RUN,
	SERVER_STATE_SHUTDOWN,
};

extern int arg_c;
extern char **arg_v;
extern int runflag;
extern char *SERVER_NAME;
extern char SERVER_TYPE;

extern int parse_console(const char* buf);
extern const char *get_svn_revision(void);
extern int do_init(int,char**);
extern void set_server_type(void);
extern void do_shutdown(void);
extern void do_abort(void);
extern void do_final(void);

#endif /* _CORE_H_ */
