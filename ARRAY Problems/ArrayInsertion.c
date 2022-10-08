#include <stdio.h>
int insert(int a[50], int size, int n, int item, int loc) {
  int k = 0;
  if (n + 1 > size) {
    printf("overflow");
  } else {
    for (k = n - 1; k >= loc - 1; k--)
      a[k + 1] = a[k];
    a[loc - 1] = item;
    n++;
  }
  for (int j = 0; j < n; j++)
    printf("%d ", a[j]);

  return n;
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
  printf("enter item you want to insert\n");
  scanf("%d", &num);
  printf("enter location where you want to insert\n");
  scanf("%d", &l);

  insert(arr, 50, s, num, l);

  return 0;
}
