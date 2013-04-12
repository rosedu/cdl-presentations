  if (use_dest_dir)
    {
      if (deprecated_t_option)
        {
          char *env = getenv ("TMPDIR");
          dest_dir = (env && *env
                      ? env
                      : (dest_dir_arg ? dest_dir_arg : "/tmp"));

          if (last_component (template) != template)
            error (EXIT_FAILURE, 0,
                   _("invalid template, %s, contains directory separator"),
                   quote (template));
        }
      else
        {
          if (dest_dir_arg && *dest_dir_arg)
            dest_dir = dest_dir_arg;
          else
            {
              char *env = getenv ("TMPDIR");
              dest_dir = (env && *env ? env : "/tmp");
            }
          if (IS_ABSOLUTE_FILE_NAME (template))
            error (EXIT_FAILURE, 0,
                   _("invalid template, %s; with --tmpdir,"
                     " it may not be absolute"),
                   quote (template));
        }

      dest_name = file_name_concat (dest_dir, template, NULL);
      free (template);
      template = dest_name;
      /* Note that suffix is now invalid.  */
    }
