#include <Python.h>

static PyObject *py_subs(PyObject* self, PyObject* args){
    int x;
    if(!PyArg_ParseTuple(args,"i",&x))
        return NULL;
    if(x<1)
        return Py_BuildValue("s","Error!!! Only 1 natural number");
    int i,j,h,q,k,nxt;
    int a[x];
    for(i=0;i<x;i++){
        a[i] = i+1;
    }
    h = pow(2,x);
    int res[h][x];
    int r[x];
    int numOf1[h];
    for(i=0;i<h;i++){
        k=0;
        nxt = i;
        while(nxt){
            r[k]=(int)(nxt%2);
            nxt/=2;
            k++;
        }
        for(k;k<x;k++){
            r[k]=0;
        }
        q=0;
        for(j=0;j<x;j++){
            if(r[j]==1){
                res[i][q]=a[j];
                q++;
            }
        }
        numOf1[i]=q;
        for(q;q<x;q++){
            res[i][q]=0;
        }
    }
    PyObject* list = PyList_New(0);
    PyObject* list2 = PyList_New(0);
    for(i=0;i<h;i++){
        for(j=0;j<x;j++){
            PyList_Append(list,Py_BuildValue("i",res[i][j]));
        }
        PyList_Append(list2,PyList_GetSlice(list,i*x,i*x+numOf1[i]));
    }
    return list2;
}

static PyObject *py_subsN(PyObject* self, PyObject* args){
    int x,y;
    if(!PyArg_ParseTuple(args,"ii",&x,&y))
        return NULL;
    if(y>x)
        return Py_BuildValue("s","Error!!! x<y!");
    int i,j,h,q,k,nxt,s;
    int a[x];
    for(i=0;i<x;i++){
        a[i]=i+1;
    }
    if(x==y)
        h = pow(2,x);
    else{
        int h1=1,h2=1,h3=1,x1=x,x2=y,x3=x-y;
        for(s=x1;s>0;s--)
            h1 *= s;
        for(s=x2;s>0;s--)
            h2 *= s;
        for(s=x3;s>0;s--)
            h3 *= s;
        h = (int)(h1/(h2*h3));
    }
    int res[h][y];
    int r[x];
    int p=0,sp;
    i = 0;
    PyObject* list = PyList_New(0);
    PyObject* list2 = PyList_New(0);
    if(y < x){
        while(p<pow(2,x)){
            sp=0;
            k=0;
            nxt=p;
            while(nxt){
                r[k]=(int)(nxt%2);
                if(r[k]==1)
                    sp++;
                nxt/=2;
                k++;
            }
            for(k;k<y;k++)
                r[k]=0;
            if(sp=y){
                q=0;
                for(j=0;j<x;j++){
                    if(r[j]==1){
                        res[i][q]=a[j];
                        q++;
                    }
                }
                i++;
            }
            p++;
        }
        for(i=0;i<h;i++){
            for(j=0;j<y;j++){
                PyList_Append(list,Py_BuildValue("i",res[i][j]));
            }
            PyList_Append(list2,PyList_GetSlice(list,i*y,i*y+y));
        }
        return list2;
    }
    else
        for(i=0;i<x;i++)
            PyList_Append(list,Py_BuildValue("i",i+1));
        PyList_Append(list2,list);
        return list2;
}

static PyMethodDef ownmod_methods[]={
    {"subs",py_subs,METH_VARARGS,"subs function"},
    {"subsN",py_subsN,METH_VARARGS,"subsN function"},
    {NULL,NULL,0,NULL}
};

static PyModuleDef simple_module={
    PyModuleDef_HEAD_INIT,
    "my_subs",
    "subsets",
    -1,
    ownmod_methods
};

PyMODINIT_FUNC PyInit_my_subs(void){
    PyObject* m;
    m = PyModule_Create(&simple_module);
    if (m==NULL)
        return NULL;
    return m;
}