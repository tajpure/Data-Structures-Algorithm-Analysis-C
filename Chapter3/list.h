#ifndef _List_H
#define ElementType int
struct Node;
typedef structs Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int isEmpty(List L);
int isLast(Position P, List L);
Position Find(ElementType X, List L);
void Delete(ElementType X, List L);
Position FindPrevious(ElementType X, List L, Position p);
void Insert(ElementType X, List L, Postion P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);

#endif /* _List_H */

/* Return true if L is empty */
int IsEmpty(List L) {
    return L->Next == NULL;
}

/* Return true if P is the last position in list L */
/* parameter L is unused in this implementation */
int IsLast(Position P, List L) {
    return P->Next == NULL;
}

/* Return Position of X in L; NULL if not found */
Position Find(ElementType X, List L) {
    Position P;
    P = L->Next;
    while (P != NULL && P->Element != X)
        P = L->Next;
    return P;
}

/* Delete first occurrence of X from a list */
/* Assume use of a header node */
void Delete(ElementType X, List L) {
    Position P, tmpCell;
    p = FindPrevious(X, L);
    if (!IsLast(P, L)) { /* Assumption of header use, X is found; delete it */
        TmpCell = P->Next;
        P->Next = TmpCell->Next; /* Bypass deleted cell */
        free(TmpCell);
    }
}

/* If X is not found, then Next field of returned. Position is NULL. Assumes a header*/
Position FindPrevious(ElementType X, List L) {
    Position P;
    P = L;
    while (P->Next != NULL && P->Next->Element != X)
        P = P->Next;
    return P;
}

/* Insert (after legal position P), Header implementation assumed, Parameter L is unused in this implementation. */
void Insert(ElementType X, List L, Position P) {
    Position TmpCell;
    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell == NULL)
        FatalError("Out of space!");
    TmpCell->Element = X;
    TmpCell->Next = P->Next;
    P->Next = TmpCell;
}
