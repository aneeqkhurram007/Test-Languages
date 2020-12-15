import React, { useState, useEffect } from "react";
import ContactForm from "./ContactForm";
import firebaseDb from "../firebase";

const Contacts = () => {
    var [contactObjetcs, setContactObjetcs] = useState({});
    var [contactId, setContactId] = useState('')
    useEffect(() => {
        firebaseDb.child("contacts").on("value", (snapshot) => {
            if (snapshot.val() != null)
                setContactObjetcs({
                    ...snapshot.val(),
                });
            else {
                setContactObjetcs({

                });
            }
        });
    }, []); //similar to comonentDldMount

    const addOrEdit = (obj) => {
        if (contactId == '') {


            firebaseDb.child("contacts").push(obj, (err) => {
                if (err) {
                    console.log(err);
                } else {
                    setContactId(' ')
                }
            });
        }
        else {
            firebaseDb.child(`contacts/${contactId}`).set(obj, (err) => {
                if (err) {
                    console.log(err);
                }
                else {
                    setContactId(' ')
                }
            });
        }
    };

    const onDelete = key => {
        if (window.confirm("Are you sure to delete this record")) {
            firebaseDb.child(`contacts/${key}`).remove(err => {
                if (err) {
                    console.log(err);
                }
                else {
                    setContactId(' ')
                }
            });
        }
    }
    return (
        <>
            <div class="jumbotron jumbotron-fluid">
                <div class="container">
                    <h1 class="display-4 text-center">Contact Form</h1>
                </div>
            </div>
            <div className="row">
                <div className="col-md-5">
                    <ContactForm {...({ addOrEdit, contactId, contactObjetcs })} />
                </div>
                <div className="col-md-7">
                    <table className="table table-borderless table-stripped">
                        <thead className="thead-light">
                            <tr>
                                <th>Full Name</th>
                                <th>Mobile</th>
                                <th>Email</th>
                                <th>Actions</th>
                            </tr>
                        </thead>
                        <tbody>
                            {Object.keys(contactObjetcs).map((id) => {
                                return (
                                    <tr key={id}>
                                        <td>{contactObjetcs[id].fullName}</td>{" "}
                                        <td>{contactObjetcs[id].mobile}</td>
                                        <td>{contactObjetcs[id].email}</td>
                                        <td>
                                            <a className="btn text-primary" onClick={() => { setContactId(id) }}>
                                                <i className="fas fa-pen alt"></i>
                                            </a>
                                            <a className="btn text-danger" onClick={() => { onDelete(id) }}>
                                                <i className="fas fa-trash alt"></i>
                                            </a>

                                        </td>
                                    </tr>
                                );
                            })}
                        </tbody>
                    </table>
                </div>
            </div>
        </>
    );
};
export default Contacts;
