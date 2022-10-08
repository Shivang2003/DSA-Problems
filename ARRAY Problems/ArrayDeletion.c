#include <stdio.h>
int delete (int a[50], int size, int n, int loc) {
  int k = 0, ditem;
  if (n == 0)
    printf("Underflow");
  else {
    ditem = a[loc - 1];
    for (k = loc - 1; k < n - 1; k++)
      a[k] = a[k + 1];
    n--;
    printf("deleted item= %d\n", ditem);
    for (int j = 0; j < n; j++)
      printf("%d ", a[j]);

    return n;
  }
}

int main() {
  int arr[50], s, num, l;
  printf("enter no of elements in array\n");
  scanf("%d", &s);
  printf("enter element of array\n");
  for (int i = 0; i < s; i++) {
    printf("element a%d= ", i);
    scanf("%d", &arr[i]);
  }
  printf("enter loc where you want to delete\n");
  scanf("%d", &l);

  delete (arr, 50, s, l);

  return 0;
}
