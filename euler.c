long one () {
  int i = 3;
  long ans = 0;

  for (i = 1; i < 1000; i ++) if (i % 3 == 0 || i % 5 == 0) ans += i;

  return ans;
}

long six () {
  long squares = 100 * 101 * 201 / 6;
  long sum = 100 * 101 / 2;
  return sum * sum - squares;
}
