#include <stdio.h>
#define MAX_Vertices 20 // so dinh lon nhat trong ma tran
typedef struct{
	int A[MAX_Vertices][MAX_Vertices];
	int n; //so luong dinh
}Graph;
// khoi tao do thi
void init_Graph(Graph *G, int n){ 
	G->n = n;
	int i, j;
	for(i= 1; i<=n; i++) // dong cua ma tran
		for(j= 1; j<=n; j++) // cot cua ma tran
			G->A[i][j] = 0;		
}
// them cung vao do thi
void add_edge(Graph *G, int x, int y){
	G->A[x][y] = 1;
	G->A[y][x] =1;
}
//kiem tra x va y co la lang gieng hay khong?
int adjacent(Graph *G, int x, int y){
	printf("%d la lang gieng cua %d : %d" ,x,y,(G->A[x][y] != 0));
	printf("\n1 l� dung");
	printf("\n0 l� sai");
	return 0;
}

int main(){	
	Graph G;
	int i, j;
	init_Graph(&G, 6);
	add_edge(&G, 2, 6);
	add_edge(&G, 6, 4);
	add_edge(&G, 5, 6);
	add_edge(&G, 1, 4);
	add_edge(&G, 1, 5);
	add_edge(&G, 2, 3);
	add_edge(&G, 2, 4);
	add_edge(&G, 4, 5);
	printf("so dinh cua ma tran la %d\n" , G.n);
	printf("--------------------------------\n");
	for(i= 1; i<=G.n; i++){ 
		for(j= 1; j<=G.n; j++)
			printf("%d ", G.A[i][j]);
		printf("\n");
	}	
	printf("--------------------------------\n");
	adjacent(&G, 5, 3);

	return 0;
};
