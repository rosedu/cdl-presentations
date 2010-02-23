int
main (int argc, char *argv[])
{
  struct gizmo foo;
 
  fetch_gizmo (&foo, argv[1]);
 
  if (foo.type == MOOMIN)
    puts ("It's a moomin.");
  else if (foo.bar < GIZMO_SNUFKIN_THRESHOLD / 2
           || (strcmp (foo.class_name, "snufkin") == 0)
               && foo.bar < GIZMO_SNUFKIN_THRESHOLD)
    puts ("It's a snufkin.");
  else
    {
      char *barney;  /* Pointer to the first character after
                        the last slash in the file name.  */
      int wilma;     /* Approximate size of the universe.  */
      int fred;      /* Max value of the `bar' field.  */
 
      do
        {
          frobnicate (&foo, GIZMO_SNUFKIN_THRESHOLD,
                      &barney, &wilma, &fred);
          twiddle (&foo, barney, wilma + fred);
        }
      while (foo.bar >= GIZMO_SNUFKIN_THRESHOLD);
 
      store_size (wilma);
    }
 
  return 0;
}
