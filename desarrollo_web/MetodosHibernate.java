
        Session conn = HibernateUtil.getSessionFactory().getCurrentSession();
        org.hibernate.Transaction tx = conn.beginTransaction();
                      
        Pais p = new Pais();
        p.setIdPais(1);
        p.setNombre("Mexico");
        p.setPoblacion(30000);        
        conn.save(p);
        
        Pais p = (Pais) conn.load(Pais.class, 1);
        out.println(p.getNombre());
        
        Estados e = new Estados();
        e.setIdEstado(1);
        e.setNombre("Chiapas");
        e.setPoblacion(20000);
        e.setPais(p);
        
        p.getEstadoses().add(e);
        conn.save(e);
        
        Pais p = (Pais) conn.load(Pais.class, 1);
        Estados e = (Estados) p.getEstadoses().iterator().next();
        p.getEstadoses().remove(e);
        conn.delete(e);       
        conn.flush();
        
        //Mostrar los resultados de una consulta con HQL en una table 
        List res = conn.createQuery("from Clientes").setMaxResults(10).list();    
        Iterator i = res.iterator();
        while(i.hasNext()) {
            Clientes t = (Clientes) i.next();
            out.println("<tr>");
                out.println("<td>" + t.getIdCliente()  + "</td>");                
            out.println("</tr>");
        }  


        //Consulta usando HQL con una query predefinida con nombre creada en el archivo Pais.hbm.xml
        List res = conn.getNamedQuery("paises_grandes").setMaxResults(10).list();
        Iterator i = res.iterator();
        while(i.hasNext()) {
            Pais temp = (Pais) i.next();
            out.println(temp.getNombre() + "  " + temp.getPoblacion() + "<br>");
        }
        
        Criteria criteria = conn.createCriteria(Pais.class).setProjection(Projections.max("poblacion"));
        Integer maxPob = (Integer) criteria.uniqueResult();
        out.println("La Mayor Poblacion es = " + maxPob);
        
        tx.commit();        
        
