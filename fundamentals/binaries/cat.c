
int main(int argc, char const *argv[]) {
  char buff[1024];
  int n;
  int fd = argc == 1 ? 0 :open (argv[1], 0);
  puts("HAHAHA");

  while ((n = read(fd, buff,1024)) > 0 && write(1, buff, n) > 0);

}
