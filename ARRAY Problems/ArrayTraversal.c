#include <stdio.h>
void traverse(int a[50], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}

int main() {
    int arr[50], n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
    printf("element a%d= ", i);
    scanf("%d", &arr[i]);
  }
  traverse(arr, n);

}