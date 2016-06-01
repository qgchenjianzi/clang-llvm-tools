int add(int a){
  return 3+a;
}
void foo(int* a, int *b) {
  if (a[0] > 1) {
    b[0] = 2;
  }
  add(3);
}

void bar(float x, float y);
int main()
{
  int a[] = {1,2,3};
  int b[] = {4,5,6};
  foo(a,b);
  return 0;
}
