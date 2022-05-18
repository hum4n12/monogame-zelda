using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Input;
using System;
using System.Collections.Generic;
using System.Text;
using System.Diagnostics;


namespace monogame_zelda
{
    class KeyboardManager
    {
        public KeyboardManager()
        {

        }
        public void HandleInput(MoveComponent mc)
        {
            KeyboardState state = Keyboard.GetState();
            Vector2 move = new Vector2(0, 0);

            if (state.IsKeyDown(Keys.W))
            {
                move.Y = -1;
            }
            
            if (state.IsKeyDown(Keys.A))
            {
                move.X = -1;
            }

            if (state.IsKeyDown(Keys.S))
            {
                move.Y = 1;
            }

            if (state.IsKeyDown(Keys.D))
            {
                move.X = 1;
            }

            mc.direction = move;
        }
    }
}
