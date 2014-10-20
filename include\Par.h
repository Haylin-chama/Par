#ifndef PAR_H
#define PAR_H

class Par //NOMBRE DE LA CLASE
{
    public://Metodos
        /*Funciones y operaciones*/
        Par(); //Metodo Constructor
        virtual ~Par(); //Destructor
        //El metodo constructor siempre va seguido del destructor
        void ver();
        void SetPar(int,int);
        int GetParX();
        int GetParY();

    protected://Excepciones
    private://Atributos
        /*Caracteristicas de la clase*/
        int x;
        int y;
};

#endif // PAR_H
