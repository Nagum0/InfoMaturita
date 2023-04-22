import './App.css';
import { Route, Routes } from 'react-router-dom';

import Menu from './components/Menu';
import Home from './chapters/Home';
import Python from './chapters/Python';

function App() {
  return (
    <>
      <Menu />
      <div className="content_container">
        <Routes>
          <Route path='/' element={<Home />}/>
          <Route path='/python' element={<Python />}/>
        </Routes>
      </div>
    </>
  );
}

export default App;