/*
    Gérez les droits d'accès

Chaque attribut et chaque méthode d'une classe peut posséder son propre droit d'accès.

Il existe grosso modo deux droits d'accès différents :

public  : l'attribut ou la méthode peut être appelé depuis l'extérieur de l'objet.

private  : l'attribut ou la méthode ne peut pas être appelé depuis l'extérieur de l'objet.
         Par défaut, tous les éléments d'une classe sont private  .

Il existe d'autres droits d'accès, plus complexes. Nous les verrons plus tard.

Concrètement, qu'est-ce que cela signifie ? Qu'est-ce que "l'extérieur" de l'objet ?

Eh bien, dans notre exemple, "l'extérieur" c'est le main()  , là où on utilise l'objet.

On fait appel à des méthodes mais, comme elles sont par défaut privées, on ne peut pas les
     appeler depuis le main()  !

Pour modifier les droits d'accès et mettre par exemple public  , il faut taper "public" suivi du symbole  :  . Tout ce qui se trouvera à la suite sera public  .
*/