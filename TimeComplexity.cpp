// 1. // sum of n natural number:
//  {
//      i = 1;
//      s = 1;
//      while (i <= n)
//      {
//          i++;
//          s += i;
//      }
//  }
//  i 1 2 3 4 5
//  s 1 3 6 10 15
//   k = n(n+1)/2
//   n^2+n = 2k;
//   n^2 = 2k;
//   n = sqrt(2k);
//   n = sqrt(k)

// 2
//  function a()
//  {
//      int i, j, k, n;
//      for (int i = 1; i < n; i++)
//      {
// for (int j = 1; j <= i * i; j++)
//          for (int j = 1; j <= 100; j++)
//          {
//              /* code */
//          }
// {3e1 
// }
//      }
//  }
// i 1 2 3 4 5 6 7 ...............n
// j 1 2 3 4 5 6 7 ...............n --> O(n^2)
// k 100 100 100 100 100 100 ............100 --> n^2(for uper i and j ke lia )*100(j ke lia ) ==> O(n^2)

// 3
//  function a()
//  {
//      int i, j, k, n;
//      for (int i = 1; i < n; i++)
//      {
//          for (int j = 1; j <= 100; j++)
//          {
//              /* code */
//          }
//      }
//  }