using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using System;
using System.Collections.Generic;
using System.Text;

namespace monogame_zelda.Components
{
    class PlayerGraphicsComponent : GraphicsComponent
    {
        private SpriteBatch spriteBatch;
        private Rectangle rectangle;
        private readonly int size = 40;
        public PlayerGraphicsComponent(SpriteBatch spriteBatch)
        {
            this.spriteBatch = spriteBatch;
            rectangle = new Rectangle(20, 20, size, size);
        }
        public void Update(Entity entity, GameTime gameTime)
        {
            Texture2D _texture;
            _texture = new Texture2D(this.spriteBatch.GraphicsDevice, 1, 1);
            _texture.SetData(new Color[] { Color.DarkSlateGray });
            rectangle.X = (int)entity.position.X;
            rectangle.Y = (int)entity.position.Y;

            spriteBatch.Begin();
            spriteBatch.Draw(_texture, rectangle, Color.White);
            spriteBatch.End();
        }

        public void Recieve(Message message)
        {
            
        }
    }
}
