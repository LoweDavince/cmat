double cmat_min(MATRIX* m){
    int i, j, min = cmat_get(m, 0, 0);
    for(i = 0; i < m->rows; i++){
        for(j = 0; j < m->cols; j++){
            if(min > cmat_get(m, i, j))
                min = cmat_get(m, i, j);
        }
    }
    return min;
}

double cmat_max(MATRIX* m){
    int i, j, max = cmat_get(m, 0, 0);
    for(i = 0; i < m->rows; i++){
        for(j = 0; j < m->cols; j++){
            if(max < cmat_get(m, i, j))
                max = cmat_get(m, i, j);
        }
    }
    return max;
}

MATRIX* cmat_transpose(MATRIX* m){}

MATRIX* cmat_normalize(MATRIX* m){}

MATRIX* cmat_combine_x(MATRIX* m, MATRIX* n){}

MATRIX* cmat_combine_y(MATRIX* m, MATRIX* n){}