	kb_sent=purple_xfer_get_bytes_sent(xfer)/1024.0;
	kb_rem=purple_xfer_get_bytes_remaining(xfer)/1024.0;
	elapsed=(xfer->start_time>0?now-xfer->start_time:0);
	kbps=(elapsed>0?(kb_sent/elapsed):0);

    if (kbsec!=NULL) *kbsec=g_strdup_printf(_("%.2f KiB/s"),kbps);

	    if(time_elapsed!=NULL){
		inth,m,s;
		intsecs_elapsed;

		if(xfer->start_time>0)
		{
			secs_elapsed=now-xfer->start_time;

		h=secs_elapsed/3600;
		m=(secs_elapsed%3600)/60;
		s=secs_elapsed%60;
		
	*time_elapsed=g_strdup_printf("%d:%02d:%02d",h,m,s);
    }else
	*time_elapsed=g_strdup(_("Not started"));}

