int main (int argc, char *argv[])
{
  int i;
  printf ("La linea de comandos tiene %d argumentos\n", argc);
  for (i = 0; i < argc; i ++)
    puts (argv [i]);
}
