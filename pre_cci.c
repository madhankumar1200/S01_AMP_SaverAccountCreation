# 1 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 



# 3 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "vuser_init.c" 1
 
# 36 "vuser_init.c"

vuser_init()
{
	return 0;
}
# 4 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "LaunchHomePage.c" 1
LaunchHomePage()
{
	 

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_set_max_html_param_len("9999");

	web_reg_find("Text=AMP â\x80“ Banking, home loans, super, retirement &amp; financial advice", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

 
	web_reg_save_param_ex(
		"ParamName=c_RpId",
		"LB=desc=\"",
		"RB=\"",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=c_ModifiedSince",
		"LB/IC=lastModification=",
		"RB/IC=|dtVersion",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=c_AppID",
		"LB=yourir.info/",
		"RB=.js",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=c_RenderCaptchaID",
		"LB=render=",
		"RB='></script",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=c_App",
		"LB/IC=|app=",
		"RB/IC=|rcdec",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		"LAST");

	lr_start_transaction("S01_T00_Launch_AMP_HomePage");

	web_url("amp.com.au", 
		"URL=https://amp.com.au/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

 
	web_reg_save_param_json(
		"ParamName=c_Dblob",
		"QueryString=$.d_blob",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/id*",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_MarketId",
		"QueryString=$.d_mid",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/id*",
		"LAST");

 
 
	web_reg_save_param_ex(
		"ParamName=c_Duuid",
		"LB=d_uuid=",
		"RB=\"]",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/id*",
		"LAST");

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.5.2&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=11BA6EA55322342B0A490D44%40AdobeOrg&d_nsid=0&ts=1643723227362", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_-2D14_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9&svrid=-14&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=3930928174&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t3.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643723223018%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723227364%7C0%7Cdn%7C27%7Cxu%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DMC%26d_rtbd%3Djson%26d_ver%3D2%26d_orgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26d_nsid%3D0%26ts%3D1643723227362%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723227366e0m4912T-1z11I1%7Cxcs%7C4916%7Cxce%7C4924%2C3%7C4%7Cx%7Cxhr%7Cx%7C1643723232285%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DA%26mcorgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26mid%3D{c_MarketId}%26ts%3D1643723232284%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723232186%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0$PV=1$rId=RID_2418$rpId={c_RpId}$url=https%3A%2F%2F"
		"www.amp.com.au%2F$title=$latC=1113$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323227148_865$v=10231211201155045$time=1643723236889",
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("delivery", 
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"requestId\":\"ab68d57bbd1f42f0aa8bf1c300656077\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics "
		"Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/\",\"referringUrl\":\"\"}},\"experienceCloud\":{\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"39897F9170DE4775-1AB111AF9C34427C\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"profileParameters\":{\"pageName\":\"home\"}}},\"prefetch\":{\"views\":[{\"profileParameters\":{\"pageName\":\"home\"}}]}}", 
		"LAST");

	web_reg_find("Text=Adobe AudienceManager", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dest5.html", 
		"URL=https://ampserviceslimited.demdex.net/dest5.html?d_nsid=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("api.ipdata.co", 
		"URL=https://api.ipdata.co/?api-key=1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c30", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_2",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_-2D14_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9&svrid=-14&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=3733789258&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t7.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643723223018%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C8%7C_event_%7C1643723223018%7C_vc_%7CV%7C14903%5Epf%7CVCD%7C94%7CVCDS%7C2%7CVCS%7C15693%7CVCO%7C15693%7CVCI%7C0%7CVE%7C152%5Ep751%5Ep53640%5Eps%5Es...div.product-tile__image%7CS%7C14131%2C2%7C9%7C_event_%7C1643723223018%7C_wv_%7ClcpE%7CP%7ClcpSel%7Cdiv.hpb__des%3Ep%3Afirst-child%7ClcpS%7C45566%7ClcpT%7C14221%7ClcpU%7C-%7Cfcp%7C14066%7Cfp%7C14066%7Ccls%7C0.0002%7Clt%7C6722%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723227364%7C1643723237894%7Cdn%7C1132%7Cxu%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DMC%26d_rtbd%3Djson%26d_ver%3D2%26d_orgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26d_nsid%3D0%26ts%3D1643723227362%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723227366e0m4912T-3z1I1%7Cxcs%7C4916%7Cxce%7C4924%2C3%7C4%7Cx%7Cxhr%7Cx%7C1643723232285%7C1643723237894%7Cdn%7C1132%7Cxu%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fid"
		"%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DA%26mcorgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26mid%3D{c_MarketId}%26ts%3D1643723232284%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723232286e0m5417T-2z11I1%7Cxcs%7C5499%7Cxce%7C5609%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723232186%7C1643723236893%7Cdn%7C26%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723232189e0m4714T-4z11I1%7Cxcs%7C4707%7Cxce%7C4707%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C5%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723237897%7C0%7Cdn%7C-1%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723237957%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2"
		"C2%7C7%7Cx%7Cxhr%7Cx%7C1643723238112%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fapi.ipdata.co%2F%3Fapi-key%3D1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c30%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C595%7Cxce%7C596%2C1%7C10%7C_event_%7C1643723223018%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_2418$rpId={c_RpId}$unload=xhr$tvn=%2F$tvt=1643723223018$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643723223018e2073f2074g2111h2111i2226j2145k2226l3037m3040u20812v20512w159935M{c_RpId}$ni=4g|7.25$di=1$rt=1-1643723223018%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb3058e0f2g131h131i1068j247k1068l1182m1265u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb3058e0f2g2h2i336j28k510l1050m1055u43675v43375w348255K1I11M-1105674006%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb3059e0f29g29h29i364j125k510l1051m1268u88342v88042w294660K1I12M54226"
		"6979%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb3059e0f418g418h418i1052j441k1054l1155m6116u11037v10737w48607K1I12M1922023617%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb3059e0f441g441h441i1052j508k1054l1155m6115u1273v973w2408K1I12M-2121197485%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb3059e0f0g0h0i0j0k1054l1154m1155u8810v8510w24519K1I12M52068919%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb3059e0f0g0h0i0j0k524l1050m1052u2480v2180w11909K1I11M1133817745%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb3060e0f365g365h365i1051j416k1053l1154m1155u5172v4872w38911K1I11M761272653%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb3060e0m11816I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb3060e0f0g0h0i0j0k10983l1"
		"1105m11626u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb3060e0f0g0h0i0j0k10982l11421m11629u205462v205162w205162A2E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb3060e0m11815I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb3060e0f0g0h0i0j0k10816l10853m11064u130826v130526w431873K1I12M-2119166934%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb3060e0f10981g11069h11069i11640j11104k11643l11812m11818u5737v5437w13188K1I12%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_5Fvisid_5Fver%3D4.5.2%26d_5Ffieldgroup%3DMC%26d_5Frtbd%3Djson%26d_5Fver%3D2%26d_5Forgid%3D11BA6EA55322342B0A490D44_2540AdobeOrg%26d_5Fnsid%3D0%26ts%3D1643723227362%7Cb4348e0m4912T-3z1I1%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb4378e0m10499I12%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb4397e0m9534I9%7Chttps%3A%2F%2Ffonts.googleapis.com%"
		"2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb4397e0f1g118h118i4766j190k4767l9463m9471u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb4397e0f0g0h0i0j0k1l118m4760u2343v2043w10164I9M-1570890603%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb9171e0m4714T-4z1I1%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fid%3Fd_5Fvisid_5Fver%3D4.5.2%26d_5Ffieldgroup%3DA%26mcorgid%3D11BA6EA55322342B0A490D44_2540AdobeOrg%26mid%3D{c_MarketId}%26ts%3D1643723232284%7Cb9268e0m5417T-2z1I1%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb14046e0f0g0h0i0j0k830l854m856u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Faa8fe13f4c832769bd0ab2ea7e247013.svg%7Cb14086e0f0g0h0i0j0k599l642m642u2855v2555w2555I9M2144880504%7Chttps%3A%"
		"2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fpage-banners%2FPodcast-landing-page-banner-768x480.png%7Cb14087e0f0g0h0i0j0k599l695m815u356733v356433w356360A2E2F53640O596P276I9M-848517780%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fcampaign%2Fbrand-Campaign-ProductPromo-488x276.jpg%7Cb14088e0f0g0h0i0j0k602l703m795u71976v71676w73997A2E1F53640O596P276I9M1335298681%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2F1920x440_5Fgirlpiggybank.jpg.ampaurendition.1920.0.jpg%7Cb14167e0f0g0h0i0j0k562l706m716u51131v50831w55789A2E1F675840O1920P440I7M1591522922%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FSuper1.svg%7Cb14167e0f0g0h0i0j0k586l695m707u3174v2874w2874I7M-1143048870%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Frelaxation.svg%7Cb14168e0f0g0h0i0j0k595l706m708u2137v1837w1837I7M-819759634%7Chttps%3A%2F%2Fapi.ipdata.co%2F%3Fapi-key%3D1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c"
		"30%7Cb15139e0m549z11I1%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fpage-banners%2FPodcast-landing-page-banner-768x480.png%7Cb14080m1695A2I0%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fcampaign%2Fbrand-Campaign-ProductPromo-488x276.jpg%7Cb14080m1695A2I0$fd=j1.12.4$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$isUnload=1$latC=1113$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323227148_865$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$nV=1$nVAT=1$time=1643723238847",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=AMP â\x80“ Banking, home loans, super, retirement &amp; financial advice", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.amp.com.au", 
		"URL=https://www.amp.com.au/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("amp.asx",
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t9.inf",
		"Mode=HTML",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_url("amp.nzx",
		"URL=https://yourir.info/api/v5/symbols/amp.nzx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t10.inf",
		"Mode=HTML",
		"LAST");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.asx_2",
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t11.inf",
		"Mode=HTML",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_custom_request("delivery_2",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t12.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"e5a463e9a43f4c79876b32d35dd30e58\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/\",\"referringUrl\":\"https://www.amp.com.au/\"}},\"id\":{\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"5E54090A9222F1BA-0A28CD26753F4993\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"profile"
		"Parameters\":{\"pageName\":\"home\"}}},\"prefetch\":{\"views\":[{\"profileParameters\":{\"pageName\":\"home\"}}]}}",
		"LAST");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.nzx_2",
		"URL=https://yourir.info/api/v5/symbols/amp.nzx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t13.inf",
		"Mode=HTML",
		"LAST");

	web_reg_find("Text=reCAPTCHA", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("anchor",
		"URL=https://www.google.com/recaptcha/api2/anchor?ar=1&k={c_RenderCaptchaID}&co=aHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.&hl=en&v=dPctOHA2ifhWm5WzFM_B5TjT&size=invisible&cb=4vsui6rq4c26",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t14.inf",
		"Mode=HTML",
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

 
	web_reg_save_param_ex(
		"ParamName=c_Sn",
		"LB=dtCookie=",
		"RB=;",
		"SEARCH_FILTERS",
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/NetPromoterScore*",
		"LAST");

	web_url("NetPromoterScore", 
		"URL=https://www.amp.com.au/wps/gws/NetPromoterScore?pageId=amp%3A", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("rb_bf96747ztk_3",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=2603654517&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t16.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643723238857%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723239343%7C1643723244681%7Cdn%7C1216%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239344e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-1z11I1%7Cxcs%7C5338%7Cxce%7C5338%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723239373%7C1643723239635%7Cdn%7C238%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239602e0m1T-2z11I1%7Cxcs%7C244%7Cxce%7C262%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723239681%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7C"
		"tvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239685e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-4z11I1M-2108586233%7Cxcs%7C4824%7Cxce%7C4995%2C3%7C7%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723244672%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244676e0f0g0h0i0j0k3l65m65u319v19w19T-3z11I1M1533221510%7Cxcs%7C125%7Cxce%7C126%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643723244406%7C1643723244761%7Cdn%7C1228%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244419e0m66T-5z11I1%7Cxcs%7C354%7Cxce%7C354%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723244419%7C1643723244748%7Cdn%7C1224%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb164372"
		"3244421e0m251T-6z11I1%7Cxcs%7C328%7Cxce%7C329%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643723244690%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0$PV=1$rId=RID_2418$rpId={c_RpId}$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=14$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$time=1643723249860",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("versions",
		"URL=https://yourir.info/api/v5/versions?appID={c_AppID}&libVersion=1.11.6&st=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t17.inf",
		"Mode=HTML",
		"LAST");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_4",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=2439366964&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t21.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643723238857%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723239343%7C1643723244681%7Cdn%7C1216%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239344e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-7z1I1%7Cxcs%7C5338%7Cxce%7C5338%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723239373%7C1643723239635%7Cdn%7C238%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239602e0m1T-8z1I1%7Cxcs%7C244%7Cxce%7C262%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723239681%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flega"
		"cy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239685e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-10z1I1M-2108586233%7Cxcs%7C4824%7Cxce%7C4995%2C3%7C7%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723244672%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244676e0f0g0h0i0j0k3l65m65u319v19w19T-9z1I1M1533221510%7Cxcs%7C125%7Cxce%7C126%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643723244406%7C1643723244761%7Cdn%7C1228%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244419e0m66T-11z1I1%7Cxcs%7C354%7Cxce%7C354%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723244419%7C1643723244748%7Cdn%7C1224%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctv"
		"trg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244421e0m251T-12z1I1%7Cxcs%7C328%7Cxce%7C329%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643723244690%7C1643723250249%7Cdn%7C1233%7Cxu%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244693e0m5456T-13z11I1%7Cxcs%7C5556%7Cxce%7C5559%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643723249892%7C1643723250295%7Cdn%7C1235%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D{c_AppID}%26libVersion%3D1.11.6%26st%3D1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723250037e0m141T-14z11I1%7Cxcs%7C402%7Cxce%7C403%2C2%7C10%7Cx%7Cxhr%7Cx%7C1643723251155%7C1643723251461%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643723250312%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D843%26ssd%3D1%26scd%3D13%26vi%3D1643723250308%26"
		"ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723251157e0m304T-15z11I1%7Cxcs%7C306%7Cxce%7C306%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C11%7Cx%7Cxhr%7Cx%7C1643723251873%7C1643723258338%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D1561%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D1500%26rv%3D1%26tim%3D1643723251872%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd"
		"-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C6465%7Cxce%7C6465%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C12%7Cx%7Cxhr%7Cx%7C1643723254890%7C1643723258344%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D4578%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D3000%26rv%3D1%26tim%3D1643723254889%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C3454%7Cxce%7C3454%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C13%7C_o"
		"nload_%7C_load_%7C-%7C1643723258422%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$PV=1$rId=RID_2418$rpId={c_RpId}$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=14$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$time=1643723260717",
		"LAST");

	web_custom_request("rb_bf96747ztk_5",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=3059941604&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t22.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=s%7C7%7Cx%7Cxhr%7Cx%7C323227148_865%7C1643723238112%7C%7C%2F%7C1643723223018%2C1%7C1%7C_load_%7C_load_%7C-%7C1643723238857%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C14%7C_event_%7C1643723238857%7C_vc_%7CV%7C5814%5Epc%7CVCD%7C3550%7CVCDS%7C2%7CVCS%7C19628%7CVCO%7C21577%7CVCI%7C0%7CVE%7C152%5Ep744%5Ep1296%5Eps%5Esdiv.media-block.image-template.cookie-ill%3Eimg.image-template%3Afirst-child%7CS%7C797%2C2%7C15%7C_event_%7C1643723238857%7C_wv_%7ClcpE%7CIMG%7ClcpSel%7C...ia-block.image-template%3Afirst-child%3Epicture.featured.resizable-image%3Afirst-child%3Eimg%3Anth-child...%7ClcpS%7C668144%7ClcpT%7C5953%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2F1920x440_5Fgirlpiggybank.jpg.ampaurendition.1920.0.jpg%7Cfcp%7C5953%7Cfp%7C5953%7Ccls%7C0%7Clt%7C12331%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723239343%7C1643723244681%7Cdn%7C1216%7Cxu%7Chttps%3A%2F%2Fampserviceslimited."
		"tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239344e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-16z1I1%7Cxcs%7C5338%7Cxce%7C5338%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723239373%7C1643723239635%7Cdn%7C238%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239602e0m1T-17z1I1%7Cxcs%7C244%7Cxce%7C262%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723239681%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239685e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-19z1I1M-2108586233%7Cxcs%7C4824%7Cxce%7C4995%2C3%7C7%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723244672%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fwps%2Fg"
		"ws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244676e0f0g0h0i0j0k3l65m65u319v19w19T-18z1I1M1533221510%7Cxcs%7C125%7Cxce%7C126%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643723244406%7C1643723244761%7Cdn%7C1228%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244419e0m66T-20z1I1%7Cxcs%7C354%7Cxce%7C354%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723244419%7C1643723244748%7Cdn%7C1224%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244421e0m251T-21z1I1%7Cxcs%7C328%7Cxce%7C329%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643723244690%7C1643723250249%7Cdn%7C1233%7Cxu%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Es"
		"k0%5Esh0%7Cxrt%7Cb1643723244693e0m5456T-22z1I1%7Cxcs%7C5556%7Cxce%7C5559%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643723249892%7C1643723250295%7Cdn%7C1235%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D{c_AppID}%26libVersion%3D1.11.6%26st%3D1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723250037e0m141T-23z1I1%7Cxcs%7C402%7Cxce%7C403%2C2%7C10%7Cx%7Cxhr%7Cx%7C1643723251155%7C1643723251461%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643723250312%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D843%26ssd%3D1%26scd%3D13%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7"
		"C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723251157e0m304T-24z1I1%7Cxcs%7C306%7Cxce%7C306%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C11%7Cx%7Cxhr%7Cx%7C1643723251873%7C1643723258338%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D1561%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D1500%26rv%3D1%26tim%3D1643723251872%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C6465%7Cxce%7C6465%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C12%7Cx%7Cxhr%7Cx%7C1643723254890%7C1643723258344%7Cdn%7C1244%7Cxu%7Chtt"
		"ps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D4578%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D3000%26rv%3D1%26tim%3D1643723254889%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C3454%7Cxce%7C3454%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C13%7C_onload_%7C_load_%7C-%7C1643723258422%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C16%7C_event_%7C1643723238857%7C_view_%7Csvn%7C%2F%7Csvt%7C1643723223018%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_2418"
		"$rpId={c_RpId}$domR=1643723258419$tvn=%2F$tvt=1643723238857$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a1b1643723238857e2f2g2h2i2j2k28l234m235o890p890q5564r19563s19565t19572u20812v20512w159935M{c_RpId}$ni=4g|7.25$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=14$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643723262050",
		"LAST");

	web_custom_request("rb_bf96747ztk_6",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=1746248468&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t23.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$tvn=%2F$tvt=1643723238857$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|7.25$di=1$rt=1-1643723238857%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb398e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb398e0f0g0h0i0j0m0u43675v43375w348255K1I11M-1105674006%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb398e0f0g0h0i0j0m0u88342v88042w294660K1I12M542266979%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb398e0f0g0h0i0j0m0u11037v10737w48607K1I12M1922023617%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb398e0f0g0h0i0j0m0u1273v973w2408K1I12M-2121197485%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb398e0f0g0h0i0j0m0u8810v8510w24519K1I12M52068919%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs"
		".css%7Cb398e0f0g0h0i0j0m0u2480v2180w11909K1I11M1133817745%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb398e0f0g0h0i0j0k27l59m68u5172v4872w38911K1I11M761272653%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb398e0m0I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb399e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb399e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb399e0m0I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb399e0f0g0h0i0j0k27l50m75u130826v130526w431873K1I12M-2119166934%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb399e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e54"
		"0399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb449e0f0g0h0i0j0k298l326m329u12484v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb461e0m0I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb482e0m0I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb487e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-16z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb495e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb495e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb496e0f0g0h0i0j0m0u2343v2043w10164I9M-1570890603%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb510e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca2"
		"13fa88175f7d9ffaf.woff2%7Cb511e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb511e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb511e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb511e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb745e0m1T-17z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb750e0m5532I12%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb750e0m0I12%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D814987224454%3F%7Cb757e0f0g0h0i0j0k21l4774m4781u12243v11943w31896K1I12%7Chttps%3A%2F%2F"
		"sp.analytics.yahoo.com%2Fsp.pl%7Cb778e0m4753N3O1P1I7%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2F1920x440_5Fgirlpiggybank.jpg.ampaurendition.1920.0.jpg%7Cb799e0f0g0h0i0j0m0u51131v50831w55789E1F675840O1920P440I7M1591522922%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FSuper1.svg%7Cb799e0f0g0h0i0j0m0u3174v2874w2874I7M-1143048870%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Frelaxation.svg%7Cb800e0f0g0h0i0j0m0u2137v1837w1837I7M-819759634%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FHome_2520loans.svg%7Cb800e0f0g0h0i0j0m0u3746v3446w3446I7M-1777842142%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FBanking1.svg%7Cb800e0f0g0h0i0j0m0u3376v3076w3076I7M1400897430%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fhand-and-coin.svg%7Cb800e0f0g0h0i0j0m0u1505v1205w1205I7M408813756%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fill"
		"ustrations%2Fpiggy-bank-clock.svg%7Cb800e0f0g0h0i0j0m0u2686v2386w2386I7M-963048168%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fsmart-money.svg%7Cb800e0f0g0h0i0j0m0u1948v1648w1648I7M1501333684%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FInvestments1.svg%7Cb800e0f0g0h0i0j0m0u2430v2130w2130I7M1181909166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fumbrella.svg%7Cb800e0f0g0h0i0j0m0u1615v1315w1315I7M-731300366%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643723239363%7Cb828e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-19z1I1M-2108586233%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Faa8fe13f4c832769bd0ab2ea7e247013.svg%7Cb832e0f0g0h0i0j0m0u2855v2555w2555I9M2144880504%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fpage-banners%2FPodcast-landing-page-banner-768x480.png%7Cb832e0f0g0h0i0j0k1l1m3v356433w356360N3O596P276Q768R480I9M-848517780%7Chtt"
		"ps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fcampaign%2Fbrand-Campaign-ProductPromo-488x276.jpg%7Cb833e0f0g0h0i0j0k1l1m2v71676w73997N3O596P276Q488I9M1335298681%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb847e0m0I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb847e0m0K1I11%7Chttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb849e0m0I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb851e0m0I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb889e0m4648I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb891e0f0g0h0i0j0k3l4620m4644u689v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb892e0f6g6h6i4641j42k4646l4735m4736u594v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F"
		"22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb896e0f0g0h0i0j0k4641l4729m4731u788v488w824I12%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D{c_RenderCaptchaID}%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3D4vsui6rq4c26%7Cb5545e0m270F5208N1Bi0I4%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb5562e0m66T-20z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb5564e0m251T-21z1I1%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb5567e0f0g0h0i0j0k321l371m715u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb5573e0f0g0h0i0j0k55l186m241u1682v1382w1382E2F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb5644e0m5307A1N3I7%7Chttps%3A%2F%2Fwww.amp.com"
		".au%2Fwps%2Fgws%2FNetPromoterScore%3FpageId%3Damp_253A%7Cb5819e0f0g0h0i0j0k3l65m65u319v19w19T-18z1I1M1533221510%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Cb5836e0m5456T-22z1I1%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb5925e0m358I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb5925e0m5225I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb5925e0m5225I7%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb5927e0m362I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb5928e0f0g0h0i0j0k349l371m374u3459v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb5929e0f0g0h0i0j0k355l5022m5022u300I3%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb6235e0m5060I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb6238e0m5123I12%7Chttps%3A%2F%2Famp.d2.sc"
		".omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs62978943562986%7Cb6304e0m4649I7%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643723239746%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%7Cb6347e0m4832I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb11013e0m240I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb11013e0m349I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb11013e0m349I7%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D{c_AppID}%26libVersion%3D1.11.6%26st%3D1%7Cb11180e0m141T-23z1I1%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb11447e0m383I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb11448e0m383I12%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb11458e0m839I12%7Chttps%3A%2F%2F11035194.fls.doubleclick.net%2Factivityi%5Essrc%3D11035194%5Estype%3Dampwe0%5Escat%3Dpc_5Ftt002%5Esord%3D3010442771459%5Esgtm%3D2od1q0%5Esaui"
		"ddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%3F%7Cb11854c0d550e551f551g551h551i662j551k662l773m776u683v383w482Bi2I4%7Chttps%3A%2F%2F11030517.fls.doubleclick.net%2Factivityi%5Essrc%3D11030517%5Estype%3Dampba0%5Escat%3Dpc_5Ftt01k%5Esord%3D9903385081955%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%3F%7Cb11863c0d609e612f612g612h612i612j612k731l875m876u680v380w482Bi3I4%7Chttps%3A%2F%2F11034081.fls.doubleclick.net%2Factivityi%5Essrc%3D11034081%5Estype%3Dampmn0%5Escat%3Dpc_5Ftt00g%5Esord%3D6429398075117%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%3F%7Cb11871c0d711e712f712g712h712i712j712k712l838m841u683v383w482Bi4I4%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb12300e0m304T-24z1I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb12300e0m27I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb12301e0m61I12%7Chttps%3A%2F%2Ftrc-events.ta"
		"boola.com%2F1236555%2Flog%2F3%2Funip%7Cb13018e0m6463z11I1%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb17822e0m1664z11I1%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb19569e0m977K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb19581e0f0g0h0i0j0k2l71m71u1706v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb19654e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb20561e0m2611A1N3S2614I7$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643723264123",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua-mobile", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("sec-ch-ua-platform", "ImplicitGen=Yes", "LAST"));

	lr_end_transaction("S01_T00_Launch_AMP_HomePage",2);

	lr_think_time(5);

	return 0;
}
# 5 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "NavigateToBanking.c" 1
NavigateToBanking()
{
	
	 

	web_reg_find("Text=Banking - AMP Bank", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_start_transaction("S01_T01_ClickOnBanking");

	web_url("banking", 
		"URL=https://www.amp.com.au/banking", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("0", 
		"URL=https://bat.bing.com/actionp/0?ti=16012365&Ver=2&mid=d78588b8-130f-48af-9195-a3d2211f5bf3&sid=7c784480836511ecb938af507a963ec8&vid=7c7a99f0836511ec8d66cb32184140ff&vids=1&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("delivery_3",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t27.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"033494e917804f0a85481a8a0f6b6759\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking\",\"referringUrl\":\"https://www.amp.com.au/\"}},\"id\":{\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"5C0E1C7DAD491BA0-79673CE5256CE744\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\""
		"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking\"}}]}}",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.nzx_3",
		"URL=https://yourir.info/api/v5/symbols/amp.nzx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t28.inf",
		"Mode=HTML",
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("x-dtpc", 
		"2$324197256_54h5vTAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0e0");

	web_url("NetPromoterScore_2", 
		"URL=https://www.amp.com.au/wps/gws/NetPromoterScore?pageId=amp%3Abanking", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("rb_bf96747ztk_7",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app={c_App}&crc=711500242&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643724194351%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724197359%7C1643724198978%7Cdn%7C1231%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197361e0f1g25h25i529j56k529l1613m1614u2492v2192w6539T-1z11I1%7Cxcs%7C1618%7Cxce%7C1619%2C2%7C3%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724197639%7C1643724197749%7Cdn%7C1223%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197685e0f0g0h0i0j0k1l60m60u10070v9770w50111T-2z11I1M1467405377%7Cxcs%7C107%7Cxce%7C110%2C2%7C4%7Cx%7Cxhr%7Cx%7C1643724197688%7C1643724197735%7Cdn%7C1223%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%"
		"5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197692e0m1T-3z11I1%7Cxcs%7C45%7Cxce%7C47%2C2%7C5%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724199027%7C1643724204175%7Cdn%7C1293%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199030e0f0g0h0i0j0k1l5103m5107u320v20w20T-4z11I1M-592864609%7Cxcs%7C5131%7Cxce%7C5148%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724199057%7C1643724199153%7Cdn%7C1280%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199059e0m2T-5z11I1%7Cxcs%7C94%7Cxce%7C96%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724199060%7C1643724199227%7Cdn%7C1295%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199063e0m159T-6z11I1%7Cxcs%7C166%7Cxce%7C167%2C3%7C8%7CResizeObser"
		"ver%20loop%20limit%20exceeded%7C_error_%7C-%7C1643724199121%7C1643724199121%7Cdn%7C-1%2C4%7C9%7CError%7C_type_%7C-%7C1643724199123%7C1643724199123%7Cdn%7C-1%2C4%7C10%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%7C_location_%7C-%7C1643724199125%7C1643724199125%7Cdn%7C-1%2C4%7C11%7C1865%7C_ts_%7C-%7C1643724199126%7C1643724199126%7Cdn%7C-1%2C4%7C12%7C1%7C_source_%7C-%7C1643724199128%7C1643724199128%7Cdn%7C-1%2C2%7C13%7Cx%7Cxhr%7Cx%7C1643724204153%7C1643724205108%7Cdn%7C1302%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643724199192%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D613827%26ssd%3D2%26scd%3D81%26mrir%3Dto%26vi%3D1643724199184%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%7Csvt"
		"rg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724204156e0m952T-7z11I1%7Cxcs%7C955%7Cxce%7C955%7Crc%7C204%7Crm%7CNo%20Content$PV=1$rId=RID_-909487734$rpId=226671080$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=544$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$time=1643724205172",
		"LAST");

	web_custom_request("rb_bf96747ztk_8",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app={c_App}&crc=4188049320&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t31.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=d%7C-1%7CBanking%7CC%7C-%7C323239286_168%7C1643724194335%7Chttps%3A%2F%2Fwww.amp.com.au%2F%7C%7C%7C%2F%7C1643723238857%2C1%7C1%7C_load_%7C_load_%7C-%7C1643724194351%7C1643724205817%7Cdn%7C1303%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C15%7C_event_%7C1643724194351%7C_vc_%7CV%7C4666%5Epc%7CVCD%7C2591%7CVCDS%7C2%7CVCS%7C11730%7CVCO%7C12743%7CVCI%7C0%7CVE%7C1121%5Ep467%5Ep1599%5Eps%5Esdiv.ps%3Ediv%3Anth-child%282%29%7CS%7C3696%2C2%7C16%7C_event_%7C1643724194351%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg.banner-wrapper--rates-rhs%7ClcpS%7C875059%7ClcpT%7C9916%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C9916%7Cfp%7C9916%7Ccls%7C0%7Clt%7C5157%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724197359%7C1643724198978%7Cdn%7C1231%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Damps"
		"erviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197361e0f1g25h25i529j56k529l1613m1614u2492v2192w6539T-8z1I1%7Cxcs%7C1618%7Cxce%7C1619%2C2%7C3%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724197639%7C1643724197749%7Cdn%7C1223%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197685e0f0g0h0i0j0k1l60m60u10070v9770w50111T-9z1I1M1467405377%7Cxcs%7C107%7Cxce%7C110%2C2%7C4%7Cx%7Cxhr%7Cx%7C1643724197688%7C1643724197735%7Cdn%7C1223%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197692e0m1T-10z1I1%7Cxcs%7C45%7Cxce%7C47%2C2%7C5%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724199027%7C1643724204175%7Cdn%7C1293%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%"
		"7Cxrt%7Cb1643724199030e0f0g0h0i0j0k1l5103m5107u320v20w20T-11z1I1M-592864609%7Cxcs%7C5131%7Cxce%7C5148%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724199057%7C1643724199153%7Cdn%7C1280%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199059e0m2T-12z1I1%7Cxcs%7C94%7Cxce%7C96%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724199060%7C1643724199227%7Cdn%7C1295%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199063e0m159T-13z1I1%7Cxcs%7C166%7Cxce%7C167%2C3%7C8%7CResizeObserver%20loop%20limit%20exceeded%7C_error_%7C-%7C1643724199121%7C1643724199121%7Cdn%7C-1%2C4%7C9%7CError%7C_type_%7C-%7C1643724199123%7C1643724199123%7Cdn%7C-1%2C4%7C10%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%7C_location_%7C-%7C1643724199125%7C1643724199125%7Cdn%7C-1%2C4%7C11%7C1865%7C_ts_%7C-%7C1643"
		"724199126%7C1643724199126%7Cdn%7C-1%2C4%7C12%7C1%7C_source_%7C-%7C1643724199128%7C1643724199128%7Cdn%7C-1%2C2%7C13%7Cx%7Cxhr%7Cx%7C1643724204153%7C1643724205108%7Cdn%7C1302%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643724199192%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D613827%26ssd%3D2%26scd%3D81%26mrir%3Dto%26vi%3D1643724199184%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724204156e0m952T-14z1I1%7Cxcs%7C955%7Cxce%7C955%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C14%7C_onload_%7C_load_%7C-%7C1643724205814%7C1643724205817%7Cdn%7C1303%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5"
		"Esh0%2C1%7C17%7C_event_%7C1643724194351%7C_view_%7Csvn%7C%2F%7Csvt%7C1643723238857%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-909487734$rpId=226671080$domR=1643724205812$tvn=%2Fbanking$tvt=1643724194351$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643724194351e3f4g40h40i1088j57k1088l2616m2619o4667p4667q4726r11461s11463t11466u20839v20539w161012M226671080$ni=4g|6.9$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=544$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724208684",
		"LAST");

	web_custom_request("rb_bf96747ztk_9",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app={c_App}&crc=2452274923&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t32.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$tvn=%2Fbanking$tvt=1643724194351$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$rt=1-1643724194351%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb2648e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb2648e0f1g1h1i88j23k191l235m264u43675v43375w348255K1I11M-1741269429%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb2648e0f0g0h0i0j0k208l252m422u88342v88042w294660K1I12M-559587166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb2648e0f109g109h109i207j137k212l258m491u11037v10737w48607K1I12M982644732%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb2648e0f0g0h0i0j0k259l302m585u1273v973w2408K1I12M1272468365%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb2648e0f137g137h137i258j169k263l302m303u8810v8510w24519K1I12M-19117380"
		"36%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb2648e0f87g87h87i190j87k196l241m253u2480v2180w11909K1I11M-1515373129%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb2648e0f108g108h108i195j108k197l255m259u5172v4872w38911K1I11M155572073%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb2648e0m1002I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb2649e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb2649e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb2649e0m588I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb2649e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb2"
		"649e0f0g0h0i0j0k523l567m573u130826v130526w431873K1I12M-938627940%7Chttps%3A%2F%2Fc.la1-c1-syd.salesforceliveagent.com%2Fcontent%2Fg%2Fjs%2F51.0%2Fdeployment.js%7Cb2649e0m1976K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb2967e0f270g324h324i590j339k590l1645m1658u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb2990e0m249I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb3003e0m237I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb3010e0f1g25h25i529j56k529l1613m1614u2492v2192w6539T-8z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb3011e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb3011e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb3011e0f0g0h0i0j0k1l21"
		"m22u300I9M-1570890603%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb3086e0f0g0h0i0j0m0u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb3087e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb3087e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb3087e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb3087e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb3087e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197"
		"812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D101251047083%3F%7Cb3237e0f2g72h72i296j90k94l488m488u12244v11944w31896K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FBanking1.svg%7Cb3250e0f0g0h0i0j0m0u3376v3076w3076I7M1400897430%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fhand-and-coin.svg%7Cb3250e0f0g0h0i0j0m0u1505v1205w1205I7M408813756%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fpiggy-bank-clock.svg%7Cb3250e0f0g0h0i0j0m0u2686v2386w2386I7M-963048168%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fsmart-money.svg%7Cb3250e0f0g0h0i0j0m0u1948v1648w1648I7M1501333684%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb3252e0f0g0h0i0j0k74l105m109u28019v27719w186470E1F870756O1519P590Q3840R1400I9M-305230292%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Ffinancial-hub%2Fmanage-my-money%2FMENU_5Fbuynowpaylater"
		"22.jpg.ampaurendition.1920.0.jpg%7Cb3259e0f0g0h0i0j0m0u180334v180034w182325I7M-929783390%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Ffinancial-hub%2Fmanage-my-money%2FMENU_5FLNY22.jpg.ampaurendition.1920.0.jpg%7Cb3259e0f0g0h0i0j0m0u146424v146124w148784I7M138881200%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FServices.svg%7Cb3259e0f0g0h0i0j0m0u7754v7454w7454I7M-670098857%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FFAQs.svg%7Cb3260e0f0g0h0i0j0m0u2870v2570w2570I7M1608639612%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FTools-and-calculators.svg%7Cb3260e0f0g0h0i0j0m0u2313v2013w2013I7M577022317%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643724197432%7Cb3334e0f0g0h0i0j0k1l60m60u10070v9770w50111T-9z1I1M1467405377%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fcall-us.svg%7Cb3334e0f0g0h0i0j0m0u1703v1403w1403I7M1602830574%7Chttps%3A"
		"%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffaq.svg%7Cb3334e0f0g0h0i0j0m0u2630v2330w2330I7M-1001153296%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffind-a-form.svg%7Cb3334e0f0g0h0i0j0m0u3714v3414w3414I7M1227801715%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fget-advice.svg%7Cb3335e0f0g0h0i0j0m0u1648v1348w1348I7M391139267%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb3341e0m1T-10z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb3344e0m1I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb3345e0m3I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb3345e0m0K1I11%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2Fkombi_5Fvan_5Fproduct_5Fpromo.jpg%7Cb3348e0f0g0h0i0j0k1l45m46u16097v15797w17703N3O493P276Q488I9M-1132135011%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F5c32de29c638fdf3bb4adc662a0ad595.woff2%7Cb3353e0f0g0h0i0j0k25l177m1"
		"84u83682v83382w83382I9M308654172%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fplaceholder%2FBusget_2520Planner_2520calculator_2520image.png.ampaurendition.1920.0.jpg%7Cb3373e0f0g0h0i0j0k3l159m166u72741v72441w85494I7M1245487009%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb3374e0f0g0h0i0j0m0u1682v1382w1382E1F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb3384e0m6401N3O1P1I7%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb3654e0m7I12%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb3729e0m2I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb3730e0f0g0h0i0j0k1l1m2v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb3732e0f1g108h108i230j122k230l387m391u300I3%7Chttps%3A%2F%2Fconnect.facebook.net%2F"
		"en_5FUS%2Ffbevents.js%7Cb4652e0m1I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb4655e0m1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb4667e0f0g0h0i0j0k1l1m1v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb4667e0f0g0h0i0j0k1l1m1v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb4669e0f0g0h0i0j0k1l1m1v488w824I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fwps%2Fgws%2FNetPromoterScore%3FpageId%3Damp_253Abanking%7Cb4679e0f0g0h0i0j0k1l5103m5107u320v20w20T-11z1I1M-592864609%7Chttps%3A%2F%2Fd.la1-c1-syd.salesforceliveagent.com%2Fchat%2Frest%2FSystem%2FMultiNoun.jsonp%7Cb4697e0m5088I12%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb4708e0m2T-12z1I1%7Chttps%3A%2F%"
		"2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb4712e0m159T-13z1I1%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D{c_RenderCaptchaID}%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dww6vt7kjp5jf%7Cb4725e0m5065F5208N1Bi0I4%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb4761e0m5020A1N3I7%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs65232394709390%7Cb4791e0m79I7%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb4797e0m17I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb4807e0m5234I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb4809e0m6I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb4830e0m3I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4831e0m4957I7%7Chttps%3A%2F%2Fwww.facebook"
		".com%2Ftr%2F%7Cb4831e0m4957I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb4844e0m5932I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb4845e0m5909I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4873e0m4915I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4873e0m4915I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4874e0m4915I7%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs64958893837894%7Cb9791e0m32I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb9805e0m952T-14z1I1%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-icons.ttf%7Cb9830e0f0g0h0i0j0k6l35m44u58404v58104w58104I9M-56312974%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643724199155%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%7Cb10043e0m218I7%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb100"
		"59e0m200I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb10059e0m200I12%7C11035194.fls.doubleclick.net%2F..%2Factivityi%5Essrc%3D11035194%5Estype%3Dampwe0%5Escat%3Dpc_5Ftt002%5Esord%3D7403893969109%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%3F%7Cb10286c0d400e403f403g403h403i403j403k403l526m528u690v390w489Bi2I4%7C11030517.fls.doubleclick.net%2F..%2Factivityi%5Essrc%3D11030517%5Estype%3Dampba0%5Escat%3Dpc_5Ftt01k%5Esord%3D5805542943965%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%3F%7Cb10295c0d392e394f394g394h394i394j394k394l517m518u690v390w489Bi3I4%7C11034081.fls.doubleclick.net%2F..%2Factivityi%5Essrc%3D11034081%5Estype%3Dampmn0%5Escat%3Dpc_5Ftt00g%5Esord%3D399868901926%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%3F%7Cb10303c0d383e385f385g385h385i385j385k386l"
		"509m510u688v388w488Bi4I4%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb11464e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb11471e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb11472e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb11487e0m2830A1N3S2832I7$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724210730",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_custom_request("rb_bf96747ztk_10",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app={c_App}&crc=707742931&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t33.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C18%7C_event_%7C1643724221562%7C_wv_%7CAAI%7C1%7CfIS%7C27178%7CfID%7C1$rId=RID_-909487734$rpId=226671080$domR=1643724205812$tvn=%2Fbanking$tvt=1643724194351$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724223571",
		"LAST");

	lr_end_transaction("S01_T01_ClickOnBanking",2);

	lr_think_time(5);

	return 0;
}
# 6 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "NavigateToSavingsAccount.c" 1
NavigateToSavingsAccount()
{
	
	 
	
	web_reg_find("Text=High Interest Saving Accounts - AMP", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("S01_T02_ClickOnSavingsAccount_UnderBankingPage");

	web_url("savings-accounts", 
		"URL=https://www.amp.com.au/banking/savings-accounts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("delivery_4",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t35.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"49c6763e24834270a6906e81efe3dbb8\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking/savings-accounts\",\"referringUrl\":\"https://www.amp.com.au/banking\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"21AEA097CA3B1C8B-0C742F81F0746CC3\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"tra"
		"ckingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts\"}}]}}",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("0_2", 
		"URL=https://bat.bing.com/actionp/0?ti=16012365&Ver=2&mid=8280baf4-1744-4f7d-954b-6baaad95bcb6&sid=7c784480836511ecb938af507a963ec8&vid=7c7a99f0836511ec8d66cb32184140ff&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.asx_3",
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t37.inf",
		"Mode=HTML",
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_11",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts&bp=3&app={c_App}&crc=3087581382&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t38.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=d%7C-1%7CSavings%20accounts%7CC%7C-%7C324197256_54%7C1643724367512%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%7C%7C%7C%2Fbanking%7C1643724194351%2C1%7C1%7C_load_%7C_load_%7C-%7C1643724368533%7C1643724373586%7Cdn%7C1286%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%2C2%7C11%7C_event_%7C1643724368533%7C_vc_%7CV%7C1230%5Epc%7CVCD%7C1203%7CVCDS%7C2%7CVCS%7C5108%7CVCO%7C6119%7CVCI%7C0%7CVE%7C1121%5Ep467%5Ep1599%5Eps%5Esdiv.ps%3Ediv%3Anth-child%282%29%7CS%7C909%2C2%7C12%7C_event_%7C1643724368533%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg.banner-wrapper--rates-rhs%7ClcpS%7C875059%7ClcpT%7C2308%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C2308%7Cfp%7C2308%7Ccls%7C0%7Clt%7C962%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724369217%7C1643724369705%7Cdn%7C1242%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1"
		"%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369219e0f1g27h27i316j67k316l481m482u2706v2406w7447T-1z11I1%7Cxcs%7C488%7Cxce%7C488%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643724369330%7C1643724369392%7Cdn%7C1222%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369332e0m1T-2z11I1%7Cxcs%7C60%7Cxce%7C61%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724369380%7C1643724369536%7Cdn%7C1226%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369387e0f0g0h0i0j0k1l123m125u10070v9770w50111T-3z11I1M-159043271%7Cxcs%7C153%7Cxce%7C156%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643724369578%7C1643724370207%7Cdn%7C1277%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelay"
		"ed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369581e0m617T-4z11I1%7Cxcs%7C628%7Cxce%7C629%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724369582%7C1643724369703%7Cdn%7C1239%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369586e0m1T-5z11I1%7Cxcs%7C120%7Cxce%7C121%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724370215%7C1643724370515%7Cdn%7C1284%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%26tim%3D1643724369805%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%26cv%3D20220129-3-RELEASE%26tos%3D742981%26ssd%3D3%26scd%3D81%26vi%3D1643724369798%26ri%3Da50c78988635c1bdc994c3a3d67cba97%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643724370_CIi3jgYQy7x"
		"LGIbf7azrLyACKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96Q...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C299%7Cxce%7C299%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643724370302%7C1643724371699%7Cdn%7C1284%7Cxu%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724370306e0m1392T-6z11I1%7Cxcs%7C1397%7Cxce%7C1397%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643724371699%7C1643724373586%7Cdn%7C1286%7Cxu%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724371701e0m1885T-7z11I1%7Cxcs%7C1887%7Cxce%7C1887%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C10%7C_onload_%7C_load_%7C-%7C1643724372033%7C1643724372036%7Cdn%7C1285%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C13%7C_event_%7C1643724368533%7C_view_%7Csvn%7C%2Fbanking%7Csvt%7C1643724194351%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Es"
		"h0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-788520561$rpId=-1556384750$domR=1643724372031$tvn=%2Fbanking%2Fsavings-accounts$tvt=1643724368533$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643724368533e3f3g3h3i3j3k5l545m546o1004p1004q1053r3498s3500t3503u20204v19904w155695M-1556384750$ni=4g|6.9$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts$title=High%20Interest%20Saving%20Accounts%20-%20AMP$latC=2$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324369139_684$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724374858",
		"LAST");

	web_custom_request("rb_bf96747ztk_12",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts&bp=3&app={c_App}&crc=1674882816&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t39.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$tvn=%2Fbanking%2Fsavings-accounts$tvt=1643724368533$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$rt=1-1643724368533%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb575e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb575e0f0g0h0i0j0k1l1m3v43375w348255K1I11M-1741269429%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb575e0f0g0h0i0j0m0u88342v88042w294660K1I12M-559587166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb575e0f0g0h0i0j0m0u11037v10737w48607K1I12M982644732%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb575e0f0g0h0i0j0m0u1273v973w2408K1I12M1272468365%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb575e0f0g0h0i0j0m0u8810v8510w24519K1I12M-1911738036%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2Fcli"
		"entLibraries%2Ficons-libs.css%7Cb575e0f0g0h0i0j0k1l1m2v2180w11909K1I11M-1515373129%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb575e0f0g0h0i0j0k1l2m2v4872w38911K1I11M155572073%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb576e0m191I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb576e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb576e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb576e0m193I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb576e0f0g0h0i0j0k121l182m205u130826v130526w431873K1I12M-938627940%7Chttps%3A%2F%2Fc.la1-c1-syd.salesforceliveagent.com%2Fcontent%2Fg%2Fjs%2F51.0%2Fdeployment.js%7Cb576e0m185K1I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2"
		"Fwebfont%2F1.6%2Fwebfont.js%7Cb576e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb647e0f0g0h0i0j0k117l138m139u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb663e0m109I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb678e0m99I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb686e0f1g27h27i316j67k316l481m482u2706v2406w7447T-1z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb688e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb688e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb688e0f0g0h0i0j0k1l20m21u300I9M-1570890603%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb7"
		"24e0f0g0h0i0j0m0u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-icons.ttf%7Cb724e0f0g0h0i0j0m0u58404v58104w58104I9M-56312974%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F5c32de29c638fdf3bb4adc662a0ad595.woff2%7Cb725e0f0g0h0i0j0m0u83682v83382w83382I9M308654172%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb725e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb725e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb725e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb725e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fa"
		"ssets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb725e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D86731391071%3F%7Cb738e0f26g238h238i398j238k241l857m858u12250v11950w31898K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb759e0f0g0h0i0j0m0u28019v27719w186470E1F870756O1519P590Q3840R1400I9M-305230292%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fthumbnail%2Fmy-amp.jpg%7Cb762e0f0g0h0i0j0k4l48m62u16909v16609w16798N3O389P276Q488I9M1463103859%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fthumbnail%2Fdebit-card.jpg%7Cb763e0f0g0h0i0j0k6l62m62u13999v13699w13869N3O389P276Q488I9M1020678291%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fthumbnail%2Fsavings-calculator.jpg%7Cb763e0f0g0h0i0j0k9l61m62u22128v21828w21977N3O389P276Q488I9M-1336411013%7Chttps%3A%2F%2Fwww.gstatic.com"
		"%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb791e0m4I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb792e0m4I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb792e0m3K1I11%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb799e0m1T-2z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb802e0m2I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643724369252%7Cb854e0f0g0h0i0j0k1l123m125u10070v9770w50111T-3z1I1M-159043271%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fcall-us.svg%7Cb854e0f0g0h0i0j0m0u1703v1403w1403I7M1602830574%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffaq.svg%7Cb854e0f0g0h0i0j0m0u2630v2330w2330I7M-1001153296%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffind-a-form.svg%7Cb855e0f0g0h0i0j0m0u3714v3414w3414I7M1227801715%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2"
		"Fget-advice.svg%7Cb855e0f0g0h0i0j0m0u1648v1348w1348I7M391139267%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb859e0m869N3O1P1I7%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb912e0f0g0h0i0j0m0u1682v1382w1382E1F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb984e0m2I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb992e0m1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb1005e0f0g0h0i0j0k1l1m1v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb1006e0f0g0h0i0j0k1l1m1v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb1007e0f0g0h0i0j0k1l1m1v488w824I12%7Chttps%3A%2F%2Fd.la1-c1-syd.salesforceliveagent.com%2Fchat%2Fres"
		"t%2FVisitor%2FSettings.jsonp%7Cb1019e0m646I12%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D{c_RenderCaptchaID}%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dr9i0v3tdrqpq%7Cb1029e0m567F5208N1Bi0I4%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb1048e0m617T-4z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb1053e0m1T-5z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb1145e0m448A1N3I7%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb1221e0m2I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb1226e0m1I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb1231e0m1I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb1263e0m2I12%7Chttps%3A%2F%2Fwww.facebook"
		".com%2Ftr%2F%7Cb1263e0m507I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1263e0m507I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb1277e0m387I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb1278e0m2178I7%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb1595e0m4I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb1596e0m4I12%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs68684423471537%7Cb1610e0m1555I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1670e0m172I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1670e0m178I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1670e0m178I7%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb1677e0m2I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomr"
		"hp.js%7Cb1678e0f0g0h0i0j0k1l1m1v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb1679e0f1g2h2i110j3k110l282m282u300I3%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb1685e0m296z11I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb1686e0m1I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb1686e0m1I12%7C11035194.fls.doubleclick.net%2F..%2F..4%5Estype%3Dampwe0%5Escat%3Dpc_5Ftt002%5Esord%3D8302001295895%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1712c0d249e251f251g251h251i251j251k251l362m366u700v400w508Bi2I4%7C11030517.fls.doubleclick.net%2F..%2F..7%5Estype%3Dampba0%5Escat%3Dpc_5Ftt01k%5Esord%3D6100204458533%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1722c0d239e241f241g241h241i241j241k241l353m356u700v400w508Bi3I4%7C11034081.fls.doubleclick.net%2F..%2F..1%5Estype%3Dampmn0%5Es"
		"cat%3Dpc_5Ftt00g%5Esord%3D3268237875934%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1741c0d221e223f223g223h223i223j223k223l333m337u702v402w508Bi4I4%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Cb1773e0m1392T-6z1I1%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643724369745%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1934e0m188I7%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Cb3168e0m1885T-7z1I1%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs68951476384456%7Cb3457e0m41I7%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb3501e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3506e0f0g0h0i0j0k1l1m1v1406w1406I22M-15905"
		"66809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3508e0f0g0h0i0j0k0l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb3524e0m2780A1N3S2781I7$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts$title=High%20Interest%20Saving%20Accounts%20-%20AMP$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324369139_684$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724376915",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_custom_request("rb_bf96747ztk_13",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts&bp=3&app={c_App}&crc=376999922&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t40.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C14%7C_event_%7C1643724379324%7C_wv_%7CAAI%7C1%7CfIS%7C10790%7CfID%7C0$rId=RID_-788520561$rpId=-1556384750$domR=1643724372031$tvn=%2Fbanking%2Fsavings-accounts$tvt=1643724368533$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts$title=High%20Interest%20Saving%20Accounts%20-%20AMP$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324369139_684$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724381341",
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("versions_2",
		"URL=https://yourir.info/api/v5/versions?appID={c_AppID}&libVersion=1.11.6&st=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t41.inf",
		"Mode=HTML",
		"LAST");

	lr_end_transaction("S01_T02_ClickOnSavingsAccount_UnderBankingPage",2);

	lr_think_time(5);

	return 0;
}
# 7 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "LearnMoreOnSaverAccount.c" 1
LearnMoreOnSaverAccount()
{
	
	 

	web_reg_find("Text=AMP Saver Account - AMP", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("S01_T03_ClickOnLearnMore_UnderAMPSaverAccount_UnderProductSection");

	web_url("amp-saver-account", 
		"URL=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/banking/savings-accounts", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("0_3", 
		"URL=https://bat.bing.com/actionp/0?ti=16012365&Ver=2&mid=ff5e7c4b-0f90-4eef-91ba-422aaff185bb&sid=7c784480836511ecb938af507a963ec8&vid=7c7a99f0836511ec8d66cb32184140ff&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.amp.com.au/banking/savings-accounts", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_custom_request("delivery_5",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t44.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"da4169dae8064c4ba33903fb3508a100\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking/savings-accounts/amp-saver-account\",\"referringUrl\":\"https://www.amp.com.au/banking/savings-accounts\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"76BA93F56BF9DA7A-3B7D04782F4452A4\",\"trackingServ"
		"er\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}]}}",
		"LAST");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_14",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app={c_App}&crc=4294028882&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t45.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=d%7C-1%7CLearn%20more%7CC%7C-%7C324369139_684%7C1643724556679%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%7C%7C%7C%2Fbanking%2Fsavings-accounts%7C1643724368533%2C1%7C1%7C_load_%7C_load_%7C-%7C1643724556696%7C1643724561716%7Cdn%7C1357%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2C2%7C11%7C_event_%7C1643724556696%7C_vc_%7CV%7C990%5Epc%7CVCD%7C1195%7CVCDS%7C2%7CVCS%7C5078%7CVCO%7C6087%7CVCI%7C0%7CVE%7C1354%5Ep740%5Ep792%5Eps%5Esa.cookie-notification__btn-close%3Espan.amp-icon-cancel%3Afirst-child%7CS%7C863%2C2%7C12%7C_event_%7C1643724556696%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg%7ClcpS%7C963172%7ClcpT%7C1008%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C1008%7Cfp%7C1007%7Ccls%7C0.0731%7Clt%7C1044%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724557323%7C1643724557667%7Cdn%7C13"
		"04%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557326e0f1g45h45i174j115k175l295m296u1398v1098w2546T-1z11I1%7Cxcs%7C344%7Cxce%7C344%2C2%7C3%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724557592%7C1643724557709%7Cdn%7C1320%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557628e0f0g0h0i0j0k1l67m68u10070v9770w50111T-2z11I1M362168065%7Cxcs%7C114%7Cxce%7C117%2C2%7C4%7Cx%7Cxhr%7Cx%7C1643724557749%7C1643724557799%7Cdn%7C1322%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557754e0m1T-3z11I1%7Cxcs%7C47%7Cxce%7C50%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643724557882%7C1643724557987%7Cdn%7C1338%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fa"
		"pi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557969e0m1T-4z11I1%7Cxcs%7C103%7Cxce%7C105%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724557969%7C1643724557988%7Cdn%7C1338%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557972e0m1T-5z11I1%7Cxcs%7C18%7Cxce%7C19%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724558417%7C1643724558720%7Cdn%7C1355%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%252Fsavings-accounts%26tim%3D1643724557995%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%252Fsavings-accounts%26cv%3D20220129-3-RELEASE%26tos%3D842521%26ssd%3D4%26scd%3D81%26vi%3D1643724557988%26ri%3Dd1e0de780a477456bbe84b7a5ceb3687%26sd%3Dv2_ab8cc1e2063"
		"b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643724558_CIi3jgYQy7xLGKSd-azrLyADKAEwEDiu_...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C303%7Cxce%7C303%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643724558515%7C1643724559880%7Cdn%7C1355%7Cxu%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724558517e0m1362T-6z11I1%7Cxcs%7C1365%7Cxce%7C1365%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643724559880%7C1643724561716%7Cdn%7C1357%7Cxu%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724559882e0m1833T-7z11I1%7Cxcs%7C1836%7Cxce%7C1836%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C10%7C_onload_%7C_load_%7C-%7C1643724560173%7C1643724560176%7Cdn%7C1356%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C13%7C_event_%7C1643724556696%7C_view_%7Csvn%7"
		"C%2Fbanking%2Fsavings-accounts%7Csvt%7C1643724368533%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-399517870$rpId=-42293618$domR=1643724560171$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643724556696$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643724556696e3f3g3h3i3j3k4l473m478o1013p1013q1032r3475s3477t3480u22245v21945w161079M-42293618$ni=4g|10$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=2$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324557227_972$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724562982",
		"LAST");

	web_custom_request("rb_bf96747ztk_15",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app={c_App}&crc=2848283588&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t46.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643724556696$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|10$di=1$rt=1-1643724556696%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb503e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb503e0f0g0h0i0j0k14l39m42u43675v43375w348255K1I11M-1741269429%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb503e0f0g0h0i0j0m0u88342v88042w294660K1I12M-559587166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb503e0f0g0h0i0j0k14l55m56u11037v10737w48607K1I12M982644732%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb504e0f0g0h0i0j0k17l64m64u1273v973w2408K1I12M1272468365%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb504e0f0g0h0i0j0k20l64m65u8810v8510w24519K1I12M-1911738036%7Chttps%3"
		"A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb504e0f0g0h0i0j0k20l20m24v2180w11909K1I11M-1515373129%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb504e0f0g0h0i0j0k20l24m24v4872w38911K1I11M155572073%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb505e0m536I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb505e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb505e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fwinning_5Fribbon_5Fpurple_5Fteal.svg%7Cb505e0f0g0h0i0j0k333l394m408u2551v2251w2251N3O80P80Q150R150I7M2023321959%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fcalendar_5Finvite_5Fdecline_5Fpurple_5Fteal.svg%7Cb505e0f0g0h0i0j"
		"0k337l414m421u1145v845w845N3O80P80Q150R150I7M-1653263229%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fpaperclip_5Fpurple_5Fteal.svg%7Cb505e0f0g0h0i0j0k341l421m422u1620v1320w1320N3O80P80Q150R150I7M1074679316%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb505e0f0g0h0i0j0k244l274m293u130826v130526w431873K1I12M-416139646%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb505e0m381I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb505e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb586e0f0g0h0i0j0k274l341m342u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb608e0m280I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb622e0m267I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb630e0f1g"
		"45h45i174j115k175l295m296u1398v1098w2546T-1z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb640e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb640e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb641e0f0g0h0i0j0k1l27m28u300I9M-1570890603%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb690e0f0g0h0i0j0m0u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-icons.ttf%7Cb690e0f0g0h0i0j0m0u58404v58104w58104I9M-56312974%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F5c32de29c638fdf3bb4adc662a0ad595.woff2%7Cb690e0f0g0h0i0j0m0u83682v83382w83382I9M308654172%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb690e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.co"
		"m.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb691e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb691e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb691e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb691e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D920795069201%3F%7Cb841e0f46g59h59i195j69k84l430m431u12245v11945w31894K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643724557381%7Cb932e0f0g0h0i0j0k1l67m68u10070v9770w50111T-2z1I1M362168065%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2F"
		"data%2Ficons%2Fcall-us.svg%7Cb932e0f0g0h0i0j0m0u1703v1403w1403I7M1602830574%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffaq.svg%7Cb933e0f0g0h0i0j0m0u2630v2330w2330I7M-1001153296%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffind-a-form.svg%7Cb933e0f0g0h0i0j0m0u3714v3414w3414I7M1227801715%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fget-advice.svg%7Cb933e0f0g0h0i0j0m0u1648v1348w1348I7M391139267%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb935e0f0g0h0i0j0m0u28019v27719w186470E1F869460O1519P634Q3840R1400I9M-305230292%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemtYaGs126MiZpBA-UFUIcVXSCEkx2cmqvXlWqWuU6F.woff2%7Cb948e0f55g93h93i327j95k327l351m358u48136v47836w47836I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb990e0f0g0h0i0j0m0u1682v1382w1382E1F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fconn"
		"ect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb995e0m74I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb999e0m1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb1014e0f0g0h0i0j0k1l1m1v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb1014e0f0g0h0i0j0k1l1m1v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC437f2575c2574fa1b6401b69d97f4744-source.min.js%7Cb1015e0f0g0h0i0j0k1l29m31u564v264w404I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb1017e0f0g0h0i0j0k1l1m1v488w824I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb1046e0m10I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb1048e0m7K1I11%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7C"
		"b1058e0m1T-3z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb1061e0m3I12%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb1095e0m176A1N3I7%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb1104e0m692N3O1P1I7%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb1109e0m3I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb1121e0m150I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb1125e0m2I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb1128e0m114I12%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb1273e0m1T-4z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb1276e0m1T-5z1I1%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs64836830226271%7Cb1288e0m26I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555"
		"%2Ftrc%2F3%2Fjson%7Cb1302e0m372I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb1303e0m2171I7%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb1305e0m3I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb1305e0f0g0h0i0j0k1l1m2v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb1308e0f1g297h297i431j316k432l597m597u300I3%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb1320e0m360I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1320e0m388I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1320e0m388I7%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D{c_RenderCaptchaID}%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dhecank325gm9%7Cb1698e0m247F5208N1Bi4I4%7Chttps%3"
		"A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb1717e0m1I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb1717e0m2I12%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb1724e0m300z11I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb1724e0m1I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb1725e0m1I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1730e0m15I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1730e0m15I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1730e0m15I7%7C11035194.fls.doubleclick.net%2F..%2F.._5Ftt002%5Esord%3D1024228811222%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1786c0d347e351f351g351h351i351j351k351l462m466u710v410w528Bi0I4%7C11030517.fls.doubleclick.net%2F..%2F.._5Ftt01k%5Esord%3D5359016372465%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref"
		"%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1798c0d335e339f339g339h339i339j339k339l449m453u707v407w528Bi1I4%7C11034081.fls.doubleclick.net%2F..%2F.._5Ftt00g%5Esord%3D1856080237196%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1808c0d324e328f328g328h328i328j328k328l439m442u710v410w528Bi2I4%7C11030517.fls.doubleclick.net%2F..%2F.._5Ftt01a%5Esord%3D8128658426669%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1816c0d316e320f320g320h320i320j320k320l434m440u709v409w528Bi3I4%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Cb1821e0m1362T-6z1I1%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643724557809%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1909e0m245I7%7C"
		"https%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Cb3186e0m1833T-7z1I1%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb3477e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3483e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3485e0f0g0h0i0j0k0l0m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb3501e0m2771A1N3S2772I7$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324557227_972$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724565031",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("rb_bf96747ztk_16",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app={c_App}&crc=3664237637&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t47.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C14%7C_event_%7C1643724574870%7C_wv_%7CAAI%7C1%7CfIS%7C18126%7CfID%7C1$rId=RID_-399517870$rpId=-42293618$domR=1643724560171$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643724556696$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|10$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324557227_972$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724576876",
		"LAST");

	lr_end_transaction("S01_T03_ClickOnLearnMore_UnderAMPSaverAccount_UnderProductSection",2);

	lr_think_time(5);

	return 0;
}
# 8 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "NavigateToOpenAccount.c" 1
NavigateToOpenAccount()
{
	
	 

	web_reg_find("Text=AMP Saver Account", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("S01_T04_ClickOnOpenAnAccount");

	web_url("saver-account", 
		"URL=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("0_4", 
		"URL=https://bat.bing.com/actionp/0?ti=16012365&Ver=2&mid=05a97900-2fc2-405f-adb9-f1752a6abbf2&sid=7c784480836511ecb938af507a963ec8&vid=7c7a99f0836511ec8d66cb32184140ff&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_reg_find("Text=Login to My AMP - AMP", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("ruxitagentjs_ICA27Vfghjqrux_10231211201155045.js", 
		"URL=https://secure.amp.com.au/wps/myportal/sec/ruxitagentjs_ICA27Vfghjqrux_10231211201155045.js", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("id_2",
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.6.0&d_fieldgroup=AAM&d_rtbd=json&d_ver=2&d_orgid=11BA6EA55322342B0A490D44%40AdobeOrg&d_nsid=0&d_mid={c_MarketId}&d_blob={c_Dblob}&ts=1643724732742",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t51.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		"LAST");

	web_custom_request("delivery_6",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t52.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"08ff0f057dcd435ea0c8e6410b0ce40a\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"secure.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\",\"referringUrl\":\"https://www.amp.com.au/banking/savings-accounts/amp-saver-account\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"76109A75D5F94342-1A72C321BB83A283\",\"tr"
		"ackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"}}]}}",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"https://secure.amp.com.au");

	web_url("api.ipdata.co_2", 
		"URL=https://api.ipdata.co/?api-key=1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c30", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"LAST");

	web_reg_find("Text=AMP Saver Account", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("saver-account_2", 
		"URL=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"LAST");

	web_reg_find("Text=Login to My AMP - AMP", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_reg_find("Search=Body",
		"Text=Login to My AMP - AMP",
		"LAST");

	web_url("ruxitagentjs_ICA27Vfghjqrux_10231211201155045.js_2", 
		"URL=https://secure.amp.com.au/wps/myportal/sec/ruxitagentjs_ICA27Vfghjqrux_10231211201155045.js", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_custom_request("delivery_7",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t56.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"af3bb2bed6a34f98a5e717978b355120\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"secure.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\",\"referringUrl\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"40CEFC28B6674B1C-72DA9DFEB1E4E4A7\",\"trackingServe"
		"r\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"}}]}}",
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("DDO.portal-content.json", 
		"URL=https://www.amp.com.au/content/amp-secure/my-amp/ddc/saver-account/DDO.portal-content.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("_jcr_content.json", 
		"URL=https://www.amp.com.au/content/amp-secure/my-amp/ddc/saver-account/DDO/_jcr_content.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("_jcr_content.json_2", 
		"URL=https://www.amp.com.au/content/amp-secure/my-amp/ddc/access-account/DDO/_jcr_content.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"https://secure.amp.com.au");

	web_url("DDO.portal-content.json_2", 
		"URL=https://www.amp.com.au/content/amp-secure/my-amp/ddc/access-account/DDO.portal-content.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"LAST");

	web_reg_find("Text=Login to My AMP - AMP", 
		"LAST");

	web_add_auto_header("Content-Type", 
		"application/json");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("apiKey", 
		"Bearer df591ce84c2d12ad679bedb3e14c6ba");

	web_add_auto_header("caller", 
		"saver-account");

	web_custom_request("usersession", 
		"URL=https://secure.amp.com.au/services/secure/ddc/1.0.0/usersession", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"LAST");

	web_reg_find("Text=Login to My AMP - AMP", 
		"LAST");

	(web_remove_auto_header("Content-Type", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("apiKey", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("caller", "ImplicitGen=Yes", "LAST"));

	web_custom_request("usersession_2", 
		"URL=https://secure.amp.com.au/services/secure/ddc/1.0.0/usersession", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Content-Type", 
		"application/json");

	web_add_header("caller", 
		"saver-account");

	web_custom_request("countries", 
		"URL=https://secure.amp.com.au/ddc/public/api/refdata/countries", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("S01_T04_ClickOnOpenAnAccount",2);

	lr_think_time(5);

	return 0;
}
# 9 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "CreateNewAppln_CustomerByJustMe.c" 1
CreateNewAppln_CustomerByJustMe()
{
	
	 

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

 
	web_reg_save_param_json(
		"ParamName=c_FormId",
		"QueryString=$.payload.meta.id",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_CheckSecurityToken",
		"QueryString=$.payload.meta.securityToken",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	web_reg_find("Search=All",
		"Text=\"status\":\"open",
		"LAST");

	lr_start_transaction("S01_T05_ClickNewApplication_ClickNewCustomer_ClickJustMe");

	web_custom_request("save", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?&formName=SaverAccount", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"welcome\":{\"tags\":\"[\\\"customer\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":null,\"surName\":null,\"dateOfBirth\":null,\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":null,\"Query\":null},\"middleName\":null},\"contactDetails\":{\"emailAddress\":null,\""
		"mobilePhone\":null,\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":null,\"query\":null},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":null,\"streetName\":null,\"streetType\":{\"SelectedItem\":null,\""
		"Query\":null},\"poBox\":null,\"suburb\":null,\"state\":{\"SelectedItem\":null,\"Query\":null},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":null,\"dpid\":null,\"barcode\":null,\"isInternational\":false},\"isItPoBox\":null},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\""
		"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[null,null],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\""
		"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		"LAST");

	lr_end_transaction("S01_T05_ClickNewApplication_ClickNewCustomer_ClickJustMe",2);

	lr_think_time(5);

	return 0;
}
# 10 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "ProceedToPersonalDetails.c" 1
ProceedToPersonalDetails()
{
	
	 

	web_reg_find("Search=All",
		"Text=\"status\":\"open",
		"LAST");

	lr_start_transaction("S01_T06_ClickOnProceed_UnderImportantInfoSection");

	web_custom_request("save_2",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t65.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":null,\"surName\":null,\"dateOfBirth\":null,\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":null,\"Query\":null},\"middleName\":null},\"contactDetails\":{\"emailAddress\":null,\"mobilePhone\":null,\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":null,\"query\":null},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":null,\"streetName\":null,\"streetType\":{\"SelectedItem\":null,\"Query\":null}"
		",\"poBox\":null,\"suburb\":null,\"state\":{\"SelectedItem\":null,\"Query\":null},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":null,\"dpid\":null,\"barcode\":null,\"isInternational\":false},\"isItPoBox\":null},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[null,null],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditH"
		"eaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		"LAST");

	lr_end_transaction("S01_T06_ClickOnProceed_UnderImportantInfoSection",2);

	lr_think_time(5);

	return 0;
}
# 11 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "EnterPersonalDetails.c" 1
EnterPersonalDetails()
{
	
	 

	lr_start_transaction("S01_T07_EnterPersonalDetails_ClickOk");

	web_custom_request("save_3",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t66.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":null,\"mobilePhone\":null,\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":null,\"query\":null},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":null,\"streetName\":null,\"streetType\":{\"SelectedIte"
		"m\":null,\"Query\":null},\"poBox\":null,\"suburb\":null,\"state\":{\"SelectedItem\":null,\"Query\":null},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":null,\"dpid\":null,\"barcode\":null,\"isInternational\":false},\"isItPoBox\":null},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[null,null],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verification"
		"Status\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		"LAST");

	lr_end_transaction("S01_T07_EnterPersonalDetails_ClickOk",2);

	lr_think_time(5);

	return 0;
}
# 12 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "EnerResidentialAddress.c" 1
EnerResidentialAddress()
{
	
	 
	
	int i, length;

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Content-Type", 
		"application/json");

	web_add_auto_header("caller", 
		"saver-account");

	lr_start_transaction("S01_T08_SearchResidentialAddress_ClickOk");

	 
	length = strlen(lr_eval_string("{p_Address}"));

	for (i = 1; i <= length; i++)
	{

	lr_save_var(lr_eval_string ("{p_Address}"),i, 0, "c_ShortAddress");
	    
	if(i == length)
	   {
		   	web_reg_save_param_json(
			"ParamName=c_AddressMoniker",
			"QueryString=$.payload.QAPicklist.PicklistEntry[0].Moniker",
			"SEARCH_FILTERS",
			"Scope=Body",
			"LAST");
	   }

	web_reg_find("Search=All",
		"Text=\"Prompt\":\"Enter search\",\"Total\":",
		"LAST");

	lr_start_sub_transaction(lr_eval_string("S01_T08_SearchResidentialAddress_By_{c_ShortAddress}"), "S01_T08_SearchResidentialAddress_ClickOk");

	web_custom_request("Unit%2084%20George%20Street%2C%20BATHURST%20%20NSW%20%20279",
		"URL=https://secure.amp.com.au/ddc/public/api/qas/doSearch/AUS/{c_ShortAddress}?residentialOnly=true", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");
	
	lr_end_sub_transaction(lr_eval_string("S01_T08_SearchResidentialAddress_By_{c_ShortAddress}"), 2);
	
	}
	
	web_convert_param(
        "c_AddressEncoded",
        "SourceString={c_AddressMoniker}",
        "SourceEncoding=HTML",
        "TargetEncoding=URL",
         "LAST" );

 
	web_reg_save_param_json(
		"ParamName=c_BuildingNumber",
		"QueryString=$.payload.DDC['Building number']",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_StreetName",
		"QueryString=$.payload.DDC['Street (Name)']",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_StreetType",
		"QueryString=$.payload.DDC['Street (Type)']",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_SubUrb",
		"QueryString=$.payload.DDC.Locality",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_StateCode",
		"QueryString=$.payload.DDC['State code']",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_PostCode",
		"QueryString=$.payload.DDC.Postcode",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_DPID_DID",
		"QueryString=$.payload.DDC.DPID/DID",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 
	web_reg_save_param_json(
		"ParamName=c_Barcode",
		"QueryString=$.payload.DDC['AUSBAR.']",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_custom_request("AUS%7C9a82b8a7-931e-4496-a026-b4baffaecacb%7C7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42", 
		"URL=https://secure.amp.com.au/ddc/public/api/qas/doGetAddress/AUS/{c_AddressEncoded}?partialAddress={c_ShortAddress}", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	(web_remove_auto_header("Content-Type", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("caller", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_custom_request("save_4",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":null,\"mobilePhone\":null,\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":\"{c_Buil"
		"dingNumber}\",\"streetName\":\"{c_StreetName}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOf"
		"FundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		"LAST");

	lr_end_transaction("S01_T08_SearchResidentialAddress_ClickOk",2);

	lr_think_time(5);

	return 0;
}
# 13 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "EnterContactDetails.c" 1
EnterContactDetails()
{
	
	 

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	lr_start_transaction("S01_T09_EnterContactDetails_ClickOk");

	web_custom_request("save_5",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t72.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":\"{p_EmailID}\",\"mobilePhone\":\"{p_MobileNo}\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumb"
		"er\":null,\"streetNumber\":\"{c_BuildingNumber}\",\"streetName\":\"{c_StreetName}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Qu"
		"ery\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		"LAST");

	lr_end_transaction("S01_T09_EnterContactDetails_ClickOk",2);

	lr_think_time(5);

	return 0;
}
# 14 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "EnterTFNDetails.c" 1
EnterTFNDetails()
{
	
	 

	web_add_header("Origin", 
		"https://secure.amp.com.au");

	lr_start_transaction("S01_T10_ClickYesOnTFN_ClickOK");

	web_custom_request("save_6",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t73.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":\"{p_EmailID}\",\"mobilePhone\":\"{p_MobileNo}\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"s"
		"treetNumber\":\"{c_BuildingNumber}\",\"streetName\":\"{c_StreetName}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\""
		"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		"LAST");

	lr_end_transaction("S01_T10_ClickYesOnTFN_ClickOK",2);

	lr_think_time(5);

	return 0;
}
# 15 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "EnterForeignTaxDetails.c" 1
EnterForeignTaxDetails()
{
	
	 

	web_reg_find("Search=All",
		"Text={\"status\":\"pass\"}",
		"LAST");

	lr_start_transaction("S01_T11_Select_No_On_ForeignTaxResident_ClickOk");

	web_url("individual", 
		"URL=https://secure.amp.com.au/ddc/public/api/api-crs/AUS/individual?resCountry=AUS&postalCountry=AUS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_custom_request("save_7",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":\"{p_EmailID}\",\"mobilePhone\":\"{p_MobileNo}\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"s"
		"treetNumber\":\"{c_BuildingNumber}\",\"streetName\":\"{c_StreetName}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primar"
		"ySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		"LAST");

	lr_end_transaction("S01_T11_Select_No_On_ForeignTaxResident_ClickOk",2);

	lr_think_time(5);

	return 0;
}
# 16 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "EnterIncomeRelatedInputs.c" 1
EnterIncomeRelatedInputs()
{
	
	 

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	lr_start_transaction("S01_T12_SelectExtraDetailsFromTheDropDownRelatedToIncome_ClickOk");

	web_custom_request("save_8",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t76.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":\"{p_EmailID}\",\"mobilePhone\":\"{p_MobileNo}\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"s"
		"treetNumber\":\"{c_BuildingNumber}\",\"streetName\":\"{c_StreetName}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primar"
		"ySourceOfWealth\":{\"SelectedItem\":\"WIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"sourceOfFundsForAccount\":{\"SelectedItem\":\"FIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"reasonForOpeningAccount\":{\"SelectedItem\":\"EB\",\"Query\":\"Everyday banking (e.g. regular deposits and withdrawals for everyday expenses)\"}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		"LAST");

	lr_end_transaction("S01_T12_SelectExtraDetailsFromTheDropDownRelatedToIncome_ClickOk",2);

	lr_think_time(5);

	return 0;
}
# 17 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "ApplicantIdentityVerification.c" 1
ApplicantIdentityVerification()
{
	
	 

	web_add_header("Origin", 
		"https://secure.amp.com.au");

 
	web_reg_save_param_json(
		"ParamName=c_VerificationId",
		"QueryString=$.payload.verificationId",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"LAST");

	lr_start_transaction("S01_T13_SelectCheckBoxToVerifyIdentityByCreditBureau_ClickOk");

	web_custom_request("register",
		"URL=https://secure.amp.com.au/ddc/public/api/green-id/register",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t77.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={\"title\":\"Mr\",\"firstName\":\"{p_FirstName}\",\"middleNames\":\"\",\"lastName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"email\":\"{p_EmailID}\",\"address\":{\"country\":\"AU\",\"state\":\"{c_StateCode}\",\"streetName\":\"{c_StreetName}\",\"flatNumber\":\"\",\"streetNumber\":\"{c_BuildingNumber}\",\"suburb\":\"{c_SubUrb}\",\"postcode\":\"{c_PostCode}\",\"streetType\":\"{c_StreetType}\",\"townCity\":\"\"},\"extraData\":[{\"name\":\"dnb-credit-header-consent-given\",\"value\":\"true\"}]}",
		"LAST");

	web_add_header("Content-Type", 
		"application/json");

 
	web_reg_save_param_json(
		"ParamName=c_VerificationToken",
		"QueryString=$.payload.verificationToken",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/token*",
		"LAST");

	web_custom_request("token",
		"URL=https://secure.amp.com.au/ddc/public/api/green-id/token?verificationId={c_VerificationId}",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t78.inf",
		"Mode=HTML",
		"EncType=application/json",
		"LAST");

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("getsources",
		"URL=https://simpleui-au.vixverify.com/df/getsources",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t79.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"accountId\":\"amp_au\",\"apiCode\":\"F2x-L5D-7wW-EY4\",\"verificationToken\":\"{c_VerificationToken}\",\"origin\":\"simpleui\"}",
		"LAST");

	web_custom_request("getfields",
		"URL=https://simpleui-au.vixverify.com/df/getfields",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t80.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"accountId\":\"amp_au\",\"apiCode\":\"F2x-L5D-7wW-EY4\",\"verificationToken\":\"{c_VerificationToken}\",\"sourceId\":\"nswregodvs\",\"origin\":\"simpleui\"}",
		"LAST");

	web_custom_request("log",
		"URL=https://simpleui-au.vixverify.com/df/log",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t81.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body=[{\"message\":\"Setting overrides\",\"overrides\":\"sessionCompleteCallback sessionCancelledCallback enableBackButtonWarning enableCancelButton \",\"verificationId\":\"\",\"verificationToken\":\"\",\"accountId\":\"\",\"version\":\"\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:07:728\"},{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"winHeight\":\"841\",\"docHeight\":\"6078\",\"winWidth\":\"1519\",\"docWidth\":\"1519\",\"url\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\",\"message\":\"Client Info\",\"verificationId\":\"\",\"verificationToken\":\"\",\"accountId\":\"\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:07:730\"},{\"message\":\"Entered show\",\"verificationId\":\"\",\"verificationToken\":"
		"\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:483\"},{\"message\":\"Entered handleStartSuccess\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:907\"},{\"accountId\":\"amp_au\",\"verificationToken\":\"{c_VerificationToken}\",\"attemptId\":\"\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"platform\":\"Windows\",\"message\":\"greenID Web - Start workflow point\",\"pointOfInterest\":\"HandleStartSuccess\",\"poiOrder\":\"10\",\"verificationId\":\"\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId"
		"\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:907\"},{\"message\":\"dl is the next source, with order 0\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:915\"},{\"source\":\"dl\",\"message\":\"Loading first source\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:915\"},{\"source\":\"dl\",\"message\":\"Entered getFields: \",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":"
		"\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:915\"},{\"source\":\"nswregodvs\",\"message\":\"Entered showFields Form: nswregodvs\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:11:778\"},{\"message\":\"Entered initiateSourceyThings: nswregodvs\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:12:308\"}]",
		"LAST");

	lr_end_transaction("S01_T13_SelectCheckBoxToVerifyIdentityByCreditBureau_ClickOk",2);

	lr_think_time(5);

	 

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("S01_T14_ClickOnSkipIDCheck_ClickOk");

	web_custom_request("save_9",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t82.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":\"{p_EmailID}\",\"mobilePhone\":\"{p_MobileNo}\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"s"
		"treetNumber\":\"{c_BuildingNumber}\",\"streetName\":\"{c_StreetType}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primar"
		"ySourceOfWealth\":{\"SelectedItem\":\"WIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"sourceOfFundsForAccount\":{\"SelectedItem\":\"FIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"reasonForOpeningAccount\":{\"SelectedItem\":\"EB\",\"Query\":\"Everyday banking (e.g. regular deposits and withdrawals for everyday expenses)\"}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":\"{c_VerificationId}\",\"verificationStatus\":\"IN_PROGRESS\"}}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		"LAST");

	lr_end_transaction("S01_T14_ClickOnSkipIDCheck_ClickOk",2);

	lr_think_time(5);

	return 0;
}
# 18 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "Declaration.c" 1
Declaration()
{
	
	 

	lr_start_transaction("S01_T15_SelectCheckBoxForDeclarations_ClickOk");

	web_custom_request("save_10",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t83.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":\"{p_EmailID}\",\"mobilePhone\":\"{p_MobileNo}\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"s"
		"treetNumber\":\"{c_BuildingNumber}\",\"streetName\":\"{c_StreetName}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true"
		",\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":\"WIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"sourceOfFundsForAccount\":{\"SelectedItem\":\"FIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"reasonForOpeningAccount\":{\"SelectedItem\":\"EB\",\"Query\":\"Everyday banking (e.g. regular deposits and withdrawals for everyday expenses)\"}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":\"{c_VerificationId}\",\"verificationStatus\":\"IN_PROGRESS\"}}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":true,\"acceptTandCsDeclaration\":true,\"acceptCRSDeclaration\":true}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		"LAST");

	lr_end_transaction("S01_T15_SelectCheckBoxForDeclarations_ClickOk",2);

	lr_think_time(5);

	return 0;
}
# 19 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "CancelApplication.c" 1
CancelApplication()
{
	
	 

	web_reg_find("Search=All",
		"Text=This form has been canceled successfully",
		"LAST");

	lr_start_transaction("S01_T16_ClickCancelApplication");

	web_custom_request("cancel",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/cancel?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t84.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={}",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_reg_find("Text=AMP Saver Account - AMP", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("amp-saver-account_2", 
		"URL=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("id_3",
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.5.2&d_fieldgroup=AAM&d_rtbd=json&d_ver=2&d_orgid=11BA6EA55322342B0A490D44%40AdobeOrg&d_nsid=0&d_mid={c_MarketId}&d_blob={c_Dblob}&ts=1643726688697",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t86.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		"LAST");

	web_custom_request("delivery_8",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=c0e628ff17d542ed96155f80dfbda007&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t87.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"d55aeb0d2cfb49fc8c7b1a4bf06e65f8\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking/savings-accounts/amp-saver-account\",\"referringUrl\":\"https://secure.amp.com.au/\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"5225192D834AEFA9-40DD5AF44C39FEE8\",\"trackingServer\":"
		"\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}]}}",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.asx_4",
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t88.inf",
		"Mode=HTML",
		"LAST");

	web_reg_find("Text=Adobe AudienceManager", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dest5.html_2", 
		"URL=https://ampserviceslimited.demdex.net/dest5.html?d_nsid=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_url("versions_3",
		"URL=https://yourir.info/api/v5/versions?appID={c_AppID}&libVersion=1.11.6&st=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t90.inf",
		"Mode=HTML",
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_17",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app={c_App}&crc=3332600271&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t91.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643726685722%7C1643726694083%7Cdn%7C1358%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fsecure.amp.com.au%2F%2C2%7C15%7C_event_%7C1643726685722%7C_vc_%7CV%7C3495%5Epc%7CVCD%7C1197%7CVCDS%7C2%7CVCS%7C8422%7CVCO%7C9435%7CVCI%7C0%7CVE%7C152%5Ep744%5Ep1296%5Eps%5Esdiv.media-block.image-template.cookie-ill%3Eimg.image-template%3Afirst-child%7CS%7C3272%2C2%7C16%7C_event_%7C1643726685722%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg%7ClcpS%7C875059%7ClcpT%7C4195%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C4195%7Cfp%7C4195%7Ccls%7C0%7Clt%7C1209%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643726688698%7C1643726689786%7Cdn%7C1333%7Cxu%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DAAM%26d_rtbd%3Djson%26d_ver%3D2%26d_orgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26d_nsid%3D0%26d_mid%3D{c_Market"
		"Id}%26d_blob%3D{c_Dblob}%26ts%3D1643726688697%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726688701e0m1064T-1z11I1%7Cxcs%7C1082%7Cxce%7C1088%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643726688792%7C1643726689788%7Cdn%7C1333%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3Dc0e628ff17d542ed96155f80dfbda007%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726688794e0f1g25h25i549j51k549l969m973u1398v1098w2546T-2z11I1%7Cxcs%7C996%7Cxce%7C996%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643726689079%7C1643726689223%7Cdn%7C1316%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689085e0f0g0h0i0j0k1l93m101u10070v9770w50111T-3z11I1M193472992%7Cxcs%7C138%7Cxce%7C144%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643726689114%7C1643726689869%7Cdn%7C1344%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsy"
		"mbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689119e0m739T-4z11I1%7Cxcs%7C755%7Cxce%7C755%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643726689119%7C1643726689227%7Cdn%7C1315%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689122e0m1T-5z11I1%7Cxcs%7C108%7Cxce%7C108%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643726689311%7C1643726689873%7Cdn%7C1344%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689313e0m545T-6z1I1%7Cxcs%7C561%7Cxce%7C562%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643726689313%7C1643726689331%7Cdn%7C1323%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk"
		"0%5Esh0%7Cxrt%7Cb1643726689316e0m1T-7z1I1%7Cxcs%7C16%7Cxce%7C18%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643726689817%7C1643726689868%7Cdn%7C1344%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689846e0m1T-8z11I1%7Cxcs%7C49%7Cxce%7C51%2C2%7C10%7Cx%7Cxhr%7Cx%7C1643726690469%7C1643726690789%7Cdn%7C1356%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fsecure.amp.com.au%252F%26tim%3D1643726689388%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fsecure.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D907713%26ssd%3D4%26scd%3D81%26vi%3D1643726689378%26ri%3D7cb1c027b6939c81502688881317066a%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643726690_CIi3jgYQy7xLGOKo-63rLyAEKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1"
		"%5Esk0%5Esh0%7Cxrt%7Cb1643726690471e0m317T-9z11I1%7Cxcs%7C320%7Cxce%7C320%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C11%7Cx%7Cxhr%7Cx%7C1643726690878%7C1643726690900%7Cdn%7C1356%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D{c_AppID}%26libVersion%3D1.11.6%26st%3D1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726690880e0m19T-10z11I1%7Cxcs%7C21%7Cxce%7C22%2C2%7C12%7Cx%7Cxhr%7Cx%7C1643726692000%7C1643726692173%7Cdn%7C1357%7Cxu%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726692002e0m168T-11z11I1%7Cxcs%7C172%7Cxce%7C173%2C2%7C13%7C_onload_%7C_load_%7C-%7C1643726692164%7C1643726692165%7Cdn%7C1357%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C14%7Cx%7Cxhr%7Cx%7C1643726692173%7C1643726694083%7Cdn%7C1358%7Cxu%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%"
		"5Esh0%7Cxrt%7Cb1643726692174e0m1908T-12z11I1%7Cxcs%7C1910%7Cxce%7C1910%7Crc%7C204%7Crm%7CNo%20Content%2C1%7C17%7C_event_%7C1643726685722%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-399517870$rpId=-1133835358$domR=1643726692161$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643726685722$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643726685722e3f4g32h32i1090j56k1090l2665m2668o3418p3418q3476r6440s6442t6443u22245v21945w161082M-1133835358$ni=4g|7$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=545$app={c_App}$vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0$fId=326688573_370$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$nVAT=1$time=1643726695356",
		"LAST");

	web_custom_request("rb_bf96747ztk_18",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app={c_App}&crc=1386311267&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t92.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643726685722$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|7$di=1$rt=1-1643726685722%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb2696e0f0g0h0i0j0k1l1m133v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb2696e0f2g2h2i101j23k123l152m174u43675v43375w348255K1I11M-240775390%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb2697e0f0g0h0i0j0k133l205m385u88342v88042w294660K1I12M1312506500%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb2697e0f0g0h0i0j0k174l257m431u11037v10737w48607K1I12M-1567325341%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb2697e0f0g0h0i0j0k175l234m509u1273v973w2408K1I12M571963658%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb2697e0f0g0h0i0j0k179l236m237u8810v8510w245"
		"19K1I12M215253248%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb2697e0f81g81h81i120j81k128l163m164u2480v2180w11909K1I11M-959652868%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb2697e0f100g100h100i131j100k132l172m174u5172v4872w38911K1I11M-302924829%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb2697e0m766I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb2697e0f0g0h0i0j0k509l509m509v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb2697e0f0g0h0i0j0k512l512m513v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fwinning_5Fribbon_5Fpurple_5Fteal.svg%7Cb2697e0f0g0h0i0j0k512l513m520v2251w2251N3O80P80Q150R150I7M2023321959%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2"
		"Fcalendar_5Finvite_5Fdecline_5Fpurple_5Fteal.svg%7Cb2698e0f0g0h0i0j0k513l513m520v845w{c_BuildingNumber}5N3O80P80Q150R150I7M-1653263229%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb2698e0f0g0h0i0j0k444l471m490u130826v130526w431873K1I12M-1236435719%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fpaperclip_5Fpurple_5Fteal.svg%7Cb2698e0f0g0h0i0j0k513l513m520v1320w1320N3O80P80Q150R150I7M1074679316%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb2698e0m520I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb2698e0f0g0h0i0j0k496l496m496v5437w13188K1I12%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%7Cb2979e0m1064T-1z1I1%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb2984e0f230g249h249i656j284k656l1055m1062u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb3002e0m1044I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb3059e0m1339I12%7Chttps%3A%2F%2Famps"
		"erviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3Dc0e628ff17d542ed96155f80dfbda007%26version%3D2.3.2%7Cb3072e0f1g25h25i549j51k549l969m973u1398v1098w2546T-2z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb3073e0m1I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb3073e0f0g0h0i0j0k1l1m1v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb3073e0f0g0h0i0j0k1l51m52u300v2043w10164I9M-1570890603%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D602246962242%3F%7Cb3209e0f8g94h94i248j109k130l371m372u12241v11941w31894K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb3212e0f0g0h0i0j0k3l5m7v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2"
		"%7Cb3212e0f0g0h0i0j0k3l5m8v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb3213e0f0g0h0i0j0k3l5m6v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb3214e0f0g0h0i0j0k2l3m7v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb3280e0f0g0h0i0j0k23l56m57v27719w186470E1F869460O1519P634Q3840R1400I9M-305230292%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb3282e0f0g0h0i0j0k54l55m56v27480w27480I9M-1121560565%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemtYaGs126MiZpBA-UFUIcVXSCEkx2cmqvXlWqWuU6F.woff2%7Cb3305e0f0g0h0i0j0k31l32m32v47836w47836I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643726688855%7Cb3363e0f0g0h0i0j0k1l93m101u10070v9770w5011"
		"1T-3z1I1M193472992%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb3391e0m3I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb3392e0m2K1I11%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb3397e0m739T-4z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb3400e0m1T-5z1I1%7Chttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb3404e0m98I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb3409e0m2I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb3419e0f0g0h0i0j0k37l41m46v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb3419e0f0g0h0i0j0k39l43m46v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC437f2575c2574fa1b6401b69d97f4744"
		"-source.min.js%7Cb3420e0f0g0h0i0j0k38l43m45v264w404I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb3422e0f0g0h0i0j0k39l41m44v488w824I12%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb3477e0f0g0h0i0j0k1l1m1v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb3494e0f0g0h0i0j0k1l1m1v1382w1382E2F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb3535e0m3I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb3547e0m33I12%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb3591e0m545T-6z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb3594e0m1T-7z1I1%7Chttps%3"
		"A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb3601e0m447I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb3603e0m2I12%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb3614e0m787I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb3615e0f0g0h0i0j0k1l1m2v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb3618e0f2g419h419i529j419k530l780m780u300I3%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb3633e0m17I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb3634e0m441I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb3634e0m440I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb3674e0m1071I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb3675e0m1558I7%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%"
		"2Fanchor%3Far%3D1%26k%3D{c_RenderCaptchaID}%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dxlt2krp79or9%7Cb3699e0m700F5208N1Bi0I4%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4047e0m28I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4047e0m28I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4047e0m28I7%7Chttps%3A%2F%2Fampserviceslimited.demdex.net%2Fdest5.html%3Fd_5Fnsid%3D0%23https_253A_252F_252Fwww.amp.com.au%7Cb4062e0m909Bi2I4%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb4124e0m1T-8z1I1%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb4146e0m1096N3O1P1I7%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb4160e0m242I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb4160e0m242I12%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs61235455147040%7Cb4406e0m28I7%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Factio"
		"n%2F16012365.js%7Cb4414e0m534I12%7C11035194.fls.doubleclick.net%2F..%2F.._5Ftt002%5Esord%3D2073997459887%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4447c0d335e336f336g336h336i336j336k336l449m454u710v410w528Bi3I4%7C11030517.fls.doubleclick.net%2F..%2F.._5Ftt01k%5Esord%3D6590470128139%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4459c0d401e404f404g404h404i404j404k404l518m519u710v410w528Bi4I4%7C11034081.fls.doubleclick.net%2F..%2F.._5Ftt00g%5Esord%3D6259894650976%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4468c0d392e394f394g394h394i394j394k395l508m509u710v410w528Bi5I4%7C11030517.fls.doubleclick.net%2F..%2F.._5Ftt01a%5Esord%3D1931544389553%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.16"
		"43723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4479c0d381e383f383g383h383i383j383k383l498m498u709v409w528Bi6I4%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb4502e0m620A1N3I7%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643726689259%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4624e0m193I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb4749e0m317T-9z1I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb4750e0m1527I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb4750e0m2I12%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D{c_AppID}%26libVersion%3D1.11.6%26st%3D1%7Cb5158e0m19T-10z1I1%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Cb6280e0m168T-11z1I1%7Chttps%3A%2F%2Fcm.everesttech.net%2Fcm%2Fdd%3Fd_5Fuuid%3D{c_Duuid}%7Cb6418e0m20I7%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560e"
		"bc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb6442e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb6450e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Cb6452e0m1908T-12z1I1%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb6755e0m2863A1N3S2863I7%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb6755e0f0g0h0i0j0k1l1m2v1406w1406I22M-1590566809$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app={c_App}$vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0$fId=326688573_370$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643726697396",
		"LAST");

	web_custom_request("rb_bf96747ztk_19",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app={c_App}&crc=3056476424&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t93.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C18%7C_event_%7C1643726707335%7C_wv_%7CAAI%7C1%7CfIS%7C21579%7CfID%7C1$rId=RID_-399517870$rpId=-1133835358$domR=1643726692161$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643726685722$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|7$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app={c_App}$vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0$fId=326688573_370$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643726709344",
		"LAST");

	lr_end_transaction("S01_T16_ClickCancelApplication",2);

	return 0;
}
# 20 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 21 "e:\\madhan\\s01_amp_saveraccountcreation\\\\combined_S01_AMP_SaverAccountCreation.c" 2

