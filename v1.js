import { createApp } from 'vue'

import app from './v1.vue'



const objectOfAttrs = {
    id: 'container',
    class: 'wrapper'
  }

const app = createApp({
  data() {
    return {
      count: 0
    }
  }
  
})

app.mount('#app')


