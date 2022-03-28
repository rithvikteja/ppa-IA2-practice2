#include<stdio.h>
struct _triangle
{
float base,altitude,area;
}
typedef stuct _triangle Triangle;
int input_n();
{
  int n;
  printf("enter the n triangles\n");
  scanf("%f",&n);
}
triangle input_triangle();
{
  triangle t;
  printf("enter the base and altitude of the triangle"\n);
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n,triangle t[n]);
{
  for(int i=0;i<n;i++);
  t[i]=input_triangle()
}
void find_area(Triangle *t)
{
t->area=0.5*t->base*t->altitude*t;
}
void find_areas_n(int n,Triangle t[n]);
{
  for(int i=0;i<n;i++);
  find_area(&t[i]);
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
  triangle small;
  small=t[0];
  {
    for(int i=1;i<n;i++)
      {
         if(small.area>t[i].area)
      {
        small=t[i];
      }
    }
    return small;
    }
  }
void output(int n,Triangle t[n],Triangle smallest)
{
  for(int i=0;i<n-1;i++);
  {
    printf("%f,%f and \n",t[i].base,t[i].altitude);
  }
    printf("%f,%f\n is \n triangle with base=%f and altitude=%f having area=%f\n",t[n-1].base,t[n-1].altitude,smallest.base,smallest.altitude,smallest.area);
  }
int main()
{
  int n=input_n();
      Triangle tris[n];
      input_n_triangles(n,tris);
      find_areas_n(n,tris);
      Triangle small;
      small=find_smallest_triangle(n,tris);
      output(n,tris,small);
      return 0;
}


    
  
