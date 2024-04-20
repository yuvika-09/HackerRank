/*  Snow Howler is the librarian at the central library of the city of HuskyLand. He must handle requests which come in the following forms:
1 x y : Insert a book with y pages at the end of the xth shelf.
2 x y : Print the number of pages in the yth book on the xth shelf.
3 x : Print the number of books on the xth shelf.
Snow Howler has got an assistant, Oshie, provided by the Department of Education. Although inexperienced, Oshie can handle all of the queries of types 2 and 3.
Help Snow Howler deal with all the queries of type 1.
Oshie has used two arrays:
int* total_number_of_books;
/*
 * This stores the total number of books on each shelf.
 //int** total_number_of_pages;
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */


#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    total_number_of_books = (int *)malloc(sizeof(int)*total_number_of_shelves);
    total_number_of_pages = (int **)malloc(sizeof(int *)*total_number_of_shelves);
    for(int i = 0; i<total_number_of_shelves; i++){
        *(total_number_of_books + i) = 0;
    }
    while(total_number_of_queries--){
        int type_of_query;
        scanf("%d", &type_of_query);
        if(type_of_query == 1){
            int x, y;
            scanf("%d %d", &x, &y);
            int booksInShelf = *(total_number_of_books + x);
            *(total_number_of_pages + x) = (int*)realloc(*(total_number_of_pages+x),sizeof(int)*(booksInShelf+1));
            *(*(total_number_of_pages+x)+booksInShelf) = y;
            *(total_number_of_books + x) += 1;


        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}

