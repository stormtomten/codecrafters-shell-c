#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  int run = 1;
  while (run) {
    // Flush after every printf
    setbuf(stdout, NULL);
    // TODO: Uncomment the code below to pass the first stage
    printf("$ ");

    char command[1024];
    fgets(command, sizeof(command), stdin);
    // Remove the trailing newline and replace it with a '\0'
    command[strcspn(command, "\n")] = '\0';

    if (command == "exit") {
      run = 0;
      break;
    }

    printf("%s: command not found\n", command);
  }

  return 0;
}
