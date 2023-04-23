import './App.css';
import { Route, Routes } from 'react-router-dom';

import Menu from './components/Menu';
import Home from './chapters/Home';
import Python from './chapters/Python';
import Cpp from './chapters/cpp';

function App() {
  return (
    <div className='main_container'>
      <Menu />
      <div className="content_container">
        <Routes>
          <Route path='/' element={<Home />}/>
          <Route path='/python' element={<Python />}/>
		      <Route path='/c++' element={<Cpp />} />
        </Routes>
      </div>
    </div>
  );
}

export default App;
