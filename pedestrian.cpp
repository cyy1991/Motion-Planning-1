typedef double dd;

struct 2DState {
   dd x;
   dd y;
   dd xDot;
   dd yDot;
   dd theta;
};


class Pedestrian {
   private:
      2DState state;
   public:
   //Constructor
		Pedestrian () {
			state.x = 0;
			state.y = 0;
			state.xDot = 0;
			state.yDot = 0;
			state.theta = 0;
		}

      Pedestrian (2DState astate) {
	 		state = astate;
      }
      
      Pedestrian (dd ax, dd ay, dd axDot, dd ayDot, dd atheta) {
		  state.x = ax;
		  state.y = ay;
		  state.xDot = axDot;
		  state.yDot = ayDot;
		  state.theta = atheta;
	  	}	  

	//functions
		dd getX(){
			return state.x;
		}
		
		dd getY(){
			return state.y;
		}

		dd getXDot(){
			return state.xDot;
		}

		dd getYDot(){
			return state.yDot;
		}

		dd getTheta(){
			return state.theta;
		}

		2DState getState(){
			return state;
		}
};
