using Microsoft.Xna.Framework.Graphics;
using monogame_zelda.Components;
using System;
using System.Collections.Generic;
using System.Text;

namespace monogame_zelda
{
    public class EntityFactory
    {
        private SpriteBatch spriteBatch;
        public EntityFactory(SpriteBatch spriteBatch)
        {
            this.spriteBatch = spriteBatch;
        }

        public Entity createPlayer()
        {
            float PLAYER_SPEED = 400.0f;
            List<IComponent> components = new List<IComponent>() { new MoveComponent(PLAYER_SPEED), new PlayerGraphicsComponent(spriteBatch) };
            return new Entity(components);
        }
    }
}
