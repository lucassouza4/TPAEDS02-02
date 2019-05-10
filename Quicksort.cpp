#include"quicksortExterno.hpp"

void QuicksortExterno(FILE** ArqLi, FILE** ArqEi, FILE **ArqLEs,int Esq,int Dir)
{
    int i,j;
    TipoArea Area; /* Area de armazenamento interna */
    if(Dir-Esq < 1) return;
    FAVazia(&Area);
    Particao(ArqLi,ArqEi,ArqLEs,Area,Esq,Dir,&i,&j);
    if(i-Esq < Dir-j)
    {/* ordene primeiro o subarquivo menor*/
        QuicksortExterno(ArqLi,ArqEi,ArqLEs,Esq,i);
        QuicksortExterno(ArqLi,ArqEi,ArqLEs,j,Dir);
    }
    else
    {
        QuicksortExterno(ArqLi,ArqEi,ArqLEs,j,Dir);
        QuicksortExterno(ArqLi,ArqEi,ArqLEs,esq,i);
    }
}
LeSup(File** ArqLEs,TipoRegistro* UltLido,int* Ls,short* OndeLer)
{
    fseek(*ArqLEs,(*Ls-1)*size(TipoRegistro),SEEK_SET);
    fread(UltLido,size(TipoRegistro),1,*ArqLEs);
    (*Ls)--;
    *OndeLer =FALSE;
}
void Leinf(FILE** ArqLi,TipoRegistro* UltLido,int *Li,short* OndeLer)
{
    fread(UltLido,sizeof(TipoRegistro,1,*ArqLi);
    (*Li)++;
    *OndeLer = TRUE;
}
void InserirArea(TipoArea* Area,TipoRegistro* UltLido,int* NRArea)
{/* insere UltLido de forma ordenada na Area*/
    InsereItem( *UltLido,Area); *NRArea = ObterNumCelOcupadas(Area);
}

