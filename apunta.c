int main(int argc, const char *argv[])
{
  int a,b;
  int *ptr;
  int **pptr;

  a = b = 5;
  ptr = &a;
  *ptr = 20;
  ptr = &b;
  pptr = &ptr;
  **pptr = 40;
  b=30;
  return 0;
}
