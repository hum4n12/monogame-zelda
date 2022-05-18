using System;
using System.Collections.Generic;
using System.Text;
using System.Diagnostics;
using Microsoft.Xna.Framework;


namespace monogame_zelda
{
    public class MoveComponent : IComponent
    {
        private float speed = 500.0f;
        public Vector2 direction { get; set; } = new Vector2(0, 0);

        public MoveComponent()
        {

        }

        public MoveComponent(float speed)
        {
            this.speed = speed;
        }

        public void Update(Entity player, GameTime gameTime)
        {
            //checking if entity wants to move anywhere
            if (direction.X == 0 && direction.Y == 0)
            {
                return;
            }

            Vector2 newPosition;

            //normalizing vectors
            float length = (float) Math.Sqrt((double)direction.X * (double)direction.X + (double)direction.Y * (double)direction.Y);

            newPosition.X = direction.X / length;
            newPosition.Y = direction.Y / length;

            //counting new position of entity
            newPosition.X *= speed * (float)gameTime.ElapsedGameTime.TotalSeconds;
            newPosition.Y *= speed * (float)gameTime.ElapsedGameTime.TotalSeconds;

            //setting new position
            player.position += newPosition;

            //reseting entity direction
            direction = new Vector2(0, 0);
        }

        public void Recieve(Message message)
        {
            
        }
    }
}
