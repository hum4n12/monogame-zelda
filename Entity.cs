using System;
using System.Collections.Generic;
using System.Text;
using Microsoft.Xna.Framework;
using monogame_zelda.Components;

namespace monogame_zelda
{
    public class Entity
    {
        //basic elements that each component has
        public List<IComponent> components { get; set; }
        public Vector2 position { get; set; }

        private GraphicsComponent graphics = null;

        public Entity(List<IComponent> components)
        {
            this.components = new List<IComponent>(components);
            this.position = new Vector2(0, 0);
            this.graphics = this.GetComponent<GraphicsComponent>();
        }

        public Entity(List<IComponent> components, Vector2 position)
        {
            this.components = new List<IComponent>(components);
            this.position = position;
            this.graphics = this.GetComponent<GraphicsComponent>();
        }

        //broadcast communication system between components
        public void send(Message message)
        {
            foreach (var c in components)
            {
                c.Recieve(message);
            }
        }

        public void Update(GameTime gameTime)
        {
            foreach(var c in components)
            {
                c.Update(this, gameTime);
            }
        }
        public void Draw()
        {
            if(graphics != null)
            {
                graphics.Update(this, null);
            }
        }

        public T GetComponent<T>()
        {
            foreach (var component in this.components)
            {
                if (component is T)
                {
                    return (T)component;
                }
            }

            return default(T);
        }
    }
}
