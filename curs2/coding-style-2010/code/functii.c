class human
{
    int go_to_bed( )
    {
        // TODO: think of correct order :P

        undress( );
        put_pijamas_on( );
        brush_teeth( );
        lay_in_bed( );

        return 0;
    }



    void brush_teeth( )
    {
        toothpaste = find_toothpaste( );
        toothbrush = find_toothbrush( );

        brush( toothpaste, toothbrush, this.teeth );
    }
}
