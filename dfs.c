#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct dot{

    int element;
    struct dot *next_node;

}t_dot;

int graph[][] = {{1, 2},{},{}};
bool visited[3];//length of the nodes

int main(void)
{
    int get_element(t_dot *init, t_dot *list, int pos);
    int length(t_dot *init, t_dot *list);
    int index_of(t_dot *init, t_dot *list, int element);

    t_dot *init;
    t_dot *next_node;

    init = (t_dot *)malloc(sizeof(t_dot));
    if (init == NULL)
    {
        exit(1);
    }
    next_node = init;

    int answer;
    //next_node->next_node = (t_dot *)malloc(sizeof(t_dot));
    //next_node = next_node->next_node;

    //finalizar
    next_node = next_node->next_node = NULL;
    next_node = init;

    long count = 0; 
    while (next_node != NULL)
    {
        printf("[%d] - %d\n", count, next_node->element);
        count++;
        next_node = next_node->next_node;
    }

    return 0;
}

int get_element(t_dot *init, t_dot *list, int pos){
    list = init;
    for (int i = 0; i < pos; i++)
        list = list->next_node;
    
    return list->element;
}
int length(t_dot *init, t_dot *list){
    list = init;
    int count = 0;
    while(list != NULL){
        count++;
        list = list->next_node;
    }
    return count;
}
int index_of(t_dot *init, t_dot *list, int element){
    list = init;
    int count = 0;
    while (list->element != element)
    {
        count++;
        list = list->next_node;
    }
    return count;
}
void init_nodes(){
    for (int i = 0; i < sizeof(visited)/sizeof(int); i++)
    {
        visited[i] = false;
    }
    
}
int dfs(int node, int element, t_dot *init, t_dot *list){

    //pre provess
    visited[node] = true;

    list->element = node;
    list->next_node = (t_dot *)malloc(sizeof(t_dot));
    list = list->next_node;

    for (int i = 0; i < sizeof(graph[node])/sizeof(int); i++)
    {
        if(graph[node][i] == element){
            return graph[node][i];
        }else if(visited[node] == false){
            return dfs(graph[node][i], element);
        }else if(visited == true){
            for (int i = 0; i < length(t_dot *init, t_dot *list) - 1; i++)
            {
                /* code */
            }
            
            //next_node = next_node->next_node = NULL;
        }
    }
    
}