    void car1(int a, int b)
    {
    glBegin(GL_QUADS); //Blue Car
    glColor3ub(0, 0, 255); //body color
    glVertex2i(a+300, b+90);
    glVertex2i(a+450, b+90);
    glVertex2i(a+450, b+120);
    glVertex2i(a+300, b+120);

    glVertex2i(a+300, b+120);
    glVertex2i(a+340, b+145);
    glVertex2i(a+380, b+145);
    glVertex2i(a+410, b+120);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); //window color
    glVertex2i(a+302, b+122);
    glVertex2i(a+342, b+143);
    glVertex2i(a+378, b+143);
    glVertex2i(a+406, b+122);

    glColor3ub(0, 0, 255); //window divider
    glVertex2i(a+360, b+120);
    glVertex2i(a+360, b+145);
    glVertex2i(a+355, b+145);
    glVertex2i(a+355, b+120);
    glEnd();
    }

    void car2(int a, int b) //For Car
    {
    glBegin(GL_QUADS); //Red Car
    glColor3ub(255, 30, 60); //body color
    glVertex2i(a+300, b+140);
    glVertex2i(a+450, b+140);
    glVertex2i(a+450, b+170);
    glVertex2i(a+300, b+170);

    glVertex2i(a+342, b+142);
    glVertex2i(a+342, b+173);
    glVertex2i(a+450, b+173);
    glVertex2i(a+450, b+142);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); //window color
    glVertex2i(a+344, b+172);
    glVertex2i(a+386, b+193);
    glVertex2i(a+422, b+193);
    glVertex2i(a+448, b+172);

    glColor3ub(255, 30, 60); //window divider
    glVertex2i(a+404, b+170);
    glVertex2i(a+404, b+195);
    glVertex2i(a+399, b+195);
    glVertex2i(a+399, b+170);
    glEnd();
    }

        void carmove()
    {
    	if(xn>1200.0)
	{
		xn= -850.0;
	}
    xn+=0.0001;// blue Car move Speed

        	if(xm<-600.0)
	{
		xm=900.0;
	}
    xm-=0.0001; //red Car move Speed
    }